# Salas online

Implementación: 3 de noviembre de 2026. El modo local comparte el motor y mantiene su guardado independiente.

## Uso

1. Ejecutar `npm install` y `npm run dev`.
2. Abrir `http://localhost:5187`, elegir “Nueva partida” y “Jugar online”.
3. En “Salas”, escribir el nombre y solicitar un lugar en una mesa pública en espera.
4. El anfitrión recibe la solicitud en su sala de espera y acepta o rechaza. La persona aceptada elige una pieza libre y entra; recién entonces ocupa un lugar. Las solicitudes vencen a los dos minutos, se cancelan si el visitante se desconecta y no se conservan al reiniciar el servidor.
5. En “Crear sala”, indicar nombre de mesa y visibilidad. Las públicas aparecen en el lobby y requieren aprobación, incluso si se accede con su código. Las privadas quedan ocultas y permiten entrar directamente por invitación desde “Unirme a una sala”. Las salas anteriores a esta actualización siguen siendo privadas.
6. Quien creó la sala inicia la partida con entre dos y seis integrantes. Al comenzar se cancelan las solicitudes restantes. Las partidas empezadas se muestran en el lobby, pero no admiten jugadores nuevos ni espectadores.

El lobby actualiza la lista cada diez segundos mientras está abierto y permite actualizarla manualmente. Sólo publica nombres, piezas, cantidad de participantes y disponibilidad, sin estado de juego ni credenciales.

Cada dispositivo debe abrir el mismo servidor. Para probar en una red local, usar la IP real de la computadora del servidor en lugar de `localhost`. No se modificaron la configuración de la red ni las reglas del firewall.

El navegador conserva las credenciales de las salas en las que entró. Al volver con el enlace, la opción de unirse recupera el asiento si existe una credencial para esa sala. También hay un botón para retomar la sala anterior. Borrar los datos del navegador elimina esa posibilidad: el código compartido no permite suplantar a otro jugador. Dos perfiles o dispositivos distintos conservan identidades independientes; dos pestañas del mismo perfil que retoman la misma credencial representan al mismo jugador.

## Salas abandonadas

La presencia se cuenta por participante: varias pestañas de una misma persona no ocupan varios lugares. Si todos se desconectan, la sala aparece como “Sin jugadores conectados” durante diez minutos y luego se oculta del lobby. Todavía se puede recuperar por enlace o credencial guardada.

Cada minuto se eliminan salas desconectadas con estos plazos de inactividad:

| Estado | Plazo |
| --- | --- |
| En espera | 24 horas |
| Partida empezada | 30 días |
| Partida terminada | 7 días |

Las partidas terminadas desaparecen del lobby inmediatamente. Volver a conectar, entrar, jugar o enviar un mensaje reinicia el plazo de actividad. Las salas con participantes conectados no se eliminan por este mantenimiento. Consultar el lobby no prolonga la vida de otras mesas. Al borrar una sala se borra también su chat.

El inicio del servidor prepara la información de presencia de las salas guardadas y ejecuta la limpieza; los clientes reconstruyen su presencia al reconectar. Los plazos se configuran en `.env` con `ESTANCIERO_OFFLINE_MINUTES`, `ESTANCIERO_WAITING_HOURS`, `ESTANCIERO_PLAYING_DAYS`, `ESTANCIERO_FINISHED_DAYS` y `ESTANCIERO_REQUEST_SECONDS`. Los cambios se aplican tras reiniciar. La instalación continúa usando un solo proceso PM2 para la presencia y las solicitudes.

## Chat de texto

Dentro de una sala, el botón **Chat** abre la conversación antes de empezar o durante la partida. Muestra nombre, pieza y hora, con contador de mensajes sin leer. En móvil se abre sobre el tablero y puede cerrarse para seguir jugando. Enviar un mensaje no detiene las animaciones ni modifica turnos.

Sólo los participantes autenticados pueden leer y escribir en su sala. El servidor asigna el remitente; los mensajes se muestran como texto. Se admiten hasta 500 caracteres y cinco envíos cada diez segundos por jugador. Los identificadores evitan duplicados al reintentar un mensaje cuya confirmación se perdió.

Se conservan los últimos 100 mensajes por sala. Con PostgreSQL se guardan en `estanciero_chat`, separada de las jugadas; con archivo, en `data/chat.json`. El historial se recupera al reconectar y se puede reintentar su carga abriendo el panel. Un mensaje que falla queda escrito en el campo para reenviarlo. Volver al modo local limpia el panel; el historial permanece en la sala.

La tabla se crea automáticamente al iniciar, y también con `npm run db:init`. Para instalar este cambio se requiere reiniciar el proceso Node y recargar los navegadores. No hace falta build.

## Reglas de coordinación

- El servidor aplica las reglas. Recibe decisiones, nunca un estado de partida elegido por el cliente.
- El servidor genera los dados y baraja los mazos con `node:crypto`. El orden futuro de las cartas no se envía a los navegadores.
- El jugador de turno tira y decide compras. El comprador acepta o rechaza una propuesta. En los remates actúa el postor correspondiente.
- Cada jugador sólo reclama sus cobros y administra sus títulos o tarjetas. Durante una deuda sólo administra su patrimonio el deudor. La multa manual del reglamento queda a cargo de quien creó la sala, tras el acuerdo de la mesa.
- Una revisión de partida detecta decisiones tomadas con información vieja. Se muestra el estado actual y se pide revisar la decisión.
- Cada jugada tiene un identificador. Si se pierde su confirmación, se reintenta el mismo identificador; el servidor devuelve el resultado sin repetir el efecto. Se conservan los últimos 256 identificadores por participante, junto con las revisiones que impiden ejecutar solicitudes viejas.
- Si se corta la conexión, se suspenden los controles de ese navegador y se intenta recuperar el asiento. La sala espera al participante que deba jugar; no hay expulsión automática, reloj ni suplente.
- Si una quiebra deja el turno en un jugador eliminado, el servidor lo pasa automáticamente después de resolver deudas y remates. No necesita que la persona eliminada siga conectada.
- Las cartas recibidas se muestran en las pantallas conectadas. Sólo el jugador correspondiente recibe la decisión de comprar; los demás pueden consultar títulos y observar.

## Guardado y ejecución

El servidor admite dos almacenamientos. Sin configuración usa `data/rooms.json`, con escritura temporal y reemplazo atómico, para desarrollo local. Con `ESTANCIERO_STORAGE=postgres` guarda una fila por sala en `estanciero_rooms`: estado JSONB, revisión y fechas. No carga todas las partidas en memoria.

Cada cambio bloquea únicamente su sala con `SELECT … FOR UPDATE`, aplica las mismas reglas y confirma la transacción antes de responder. Los reintentos conservan sus identificadores. Las credenciales se guardan como hashes. Si PostgreSQL falla, no se cambia silenciosamente al archivo.

### Activar PostgreSQL en el servidor

El PostgreSQL nativo de este servidor escucha en **5433**. El puerto 5432 pertenece al contenedor de otra aplicación.

Con los archivos nuevos ya copiados, desde la carpeta del juego:

```sh
npm install
cp .env.example .env
nano .env
```

Completar la contraseña del usuario `estanciero` en `.env`:

```dotenv
ESTANCIERO_STORAGE=postgres
PGHOST=127.0.0.1
PGPORT=5433
PGDATABASE=estanciero
PGUSER=estanciero
PGPASSWORD="tu_contraseña"
```

La base y el usuario deben existir; el usuario necesita permiso para crear la tabla en su base. No hay partidas actuales que importar. La tabla se prepara con:

```sh
npm run db:init
pm2 restart estanciero
```

El proceso debe arrancar desde esta carpeta para leer `.env`. Si PM2 ya tiene variables de conexión configuradas, tienen prioridad sobre `.env`; corregirlas en su configuración y reiniciar con `--update-env`. No reemplazar `.env` en futuras actualizaciones. Está excluido del control de versiones y de Docker. No se necesita generar un build para ejecutar el servidor.

`npm run db:init` comprueba la conexión y crea la tabla si falta; no borra datos existentes. El inicio normal también prepara la tabla. Las partidas sobreviven a reinicios y actualizaciones porque quedan en PostgreSQL; deben hacerse copias de seguridad de la base. Las conexiones se limitan a diez por proceso.

Para seguir desarrollando con archivo, usar `ESTANCIERO_STORAGE=json` o no crear `.env`. La carpeta puede configurarse con `ESTANCIERO_DATA_DIR` o `--data-dir`. El puerto HTTP sigue siendo `5187`, configurable con `PORT` o `--port`.

Se mantiene **una instancia PM2**: PostgreSQL permite transacciones concurrentes, pero la presencia y los avisos Socket.IO todavía viven en ese proceso. Para varias instancias hace falta coordinar Socket.IO y las conexiones del balanceador. El límite predeterminado sigue siendo 200 salas, configurable con `ESTANCIERO_MAX_ROOMS`. No hay panel de borrado ni transferencia del anfitrión.

El proxy HTTPS debe conservar `Host` y admitir WebSocket. `/health` comprueba también la conexión con PostgreSQL y devuelve 503 si falla.

## Pruebas y límites de la verificación

`npm test` comprueba las reglas, permisos, reintentos, recuperación, interfaz y presentación. El contrato HTTP/Socket.IO se prueba con ambos almacenamientos mediante dos clientes sobre streams en memoria, sin abrir puertos.

Las pruebas SQL usan PostgreSQL embebido (PGlite): ejecutan el esquema, JSONB y transacciones reales, comprueban rollback ante fallos, recuperación desde otro adaptador, aislamiento de salas y revisiones. PGlite usa una conexión exclusiva; estas pruebas no verifican los bloqueos entre procesos de PostgreSQL nativo. La conexión al PostgreSQL 14 del servidor debe comprobarse allí con `npm run db:init` y una partida de prueba. No se ha ejecutado esa conexión desde este entorno.

El usuario confirmó previamente una partida online con dos participantes en el servidor público, antes del cambio de almacenamiento. Las pruebas de interfaz usan DOM simulado; la automatización visual y la apertura de sockets están restringidas en este entorno.

## Referencias técnicas

- [Socket.IO: salas](https://socket.io/docs/v4/rooms/).
- [Socket.IO: API del servidor](https://socket.io/docs/v4/server-api/).
- [Socket.IO: API del cliente](https://socket.io/docs/v4/client-api/).
- [Socket.IO: garantías de entrega](https://socket.io/docs/v4/delivery-guarantees/). La recuperación de nuestra partida se basa en credenciales, instantáneas y deduplicación propias; no depende de que Socket.IO conserve los paquetes perdidos.

## Dados, recorrido y sonido — actualización del 6 de noviembre de 2026

Cada tirada lleva un identificador de presentación, los dados definitivos y el recorrido generado por el motor. Incluye las casillas intermedias, retrocesos, movimientos por tarjetas y el salto directo a Comisaría. El sorteo inicial o un intento fallido de salir preso muestran los dados sin inventar desplazamientos.

El navegador anima los dados cúbicos hacia el resultado definitivo y mueve la ficha con un salto por casilla. La compra o la tarjeta se presentan al terminar el recorrido. Los controles de juego de ese navegador esperan a la animación. La presentación no vuelve a ejecutar las reglas ni modifica los resultados. Una actualización de presencia con el mismo identificador no repite el recorrido; al recuperar una partida se muestra su estado actual.

Las compras y transferencias muestran la escritura viajando al patrimonio, con una marca del color del propietario en el casillero. Las chacras y estancias se dibujan en el tablero y aparecen con una animación al construir. Los cambios de efectivo muestran el importe y animan el contador hasta el saldo confirmado. La carta recibida sale de su mazo y gira dentro de la ventana. Las ofertas se destacan y el cierre del remate muestra un martillo y anuncia la adjudicación, incluso si termina con la primera oferta. El motor conserva un identificador de presentación del último remate; las partidas anteriores siguen siendo compatibles.

La tirada reproduce `web/assets/dados.mp3`. Los pasos, llegada, cartas, dinero, compras, construcciones, remates y avisos se sintetizan en el dispositivo, sin servicios externos. El botón “Sonido: sí/no” silencia todo; “Audio” abre el volumen y los interruptores separados de efectos y avisos. Las preferencias se guardan en ese navegador. Se avisa al llegar el turno propio online, recibir mensajes con el chat cerrado, recibir solicitudes, ser aceptado o rechazado e ingresar nuevos participantes. Las recargas del historial y la presencia no repiten esos avisos. El audio se habilita tras una interacción, según la política del navegador.

La preferencia de movimiento reducido elimina los vuelos y saltos, muestra los saldos finales y acorta la mezcla de dados. Los efectos de patrimonio, dinero y remates no bloquean decisiones. Para esta actualización hace falta reiniciar el servidor Node y recargar las páginas; no requiere cambios de base de datos ni build.

Las nuevas pruebas comprueban los pasos y sus efectos, la secuencia de animación, la cancelación, el movimiento reducido, el silencio, la espera antes de comprar y la prevención de repeticiones por presencia online. El navegador de prueba de esta sesión no pudo iniciarse por las restricciones del entorno; la animación y el audio reales quedan pendientes de comprobación visual y auditiva. El usuario sí confirmó anteriormente la creación de una sala en el servidor público, la entrada de dos jugadores y varios turnos de juego, antes de esta actualización.
