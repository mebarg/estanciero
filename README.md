# Estanciero, una nueva mesa

Juego de mesa Estanciero para navegador. De 2 a 6 personas pueden compartir un dispositivo o entrar a una sala privada online desde sus propios equipos. No requiere cuentas.

## Abrir el juego

Requiere Node.js 20 o posterior. Desde esta carpeta:

```sh
npm install
npm run dev
```

Abrir la dirección que imprime el servidor (por defecto, http://localhost:5187). El servidor utiliza Socket.IO y admite PostgreSQL. Para elegir otro puerto: `npm run dev -- --port=5190`.

```sh
npm test
```

El comando opcional `npm run build` copia la interfaz a `dist/`. En hosting estático funciona el modo local; el online necesita ejecutar el servidor Node.js de este proyecto. Se debe servir mediante HTTP; abrir el HTML directamente como archivo no permite cargar los módulos JavaScript.

## Jugar online

En “Nueva partida”, elegir “Jugar online”. Una persona crea la sala con su nombre y pieza, copia la invitación y la comparte. Las demás abren el enlace o ingresan el código, eligen otra pieza y entran. Quien creó la sala inicia la partida cuando haya entre 2 y 6 participantes.

Para probar en dos dispositivos de la misma red, ambos deben abrir la dirección de la computadora que ejecuta el servidor, por ejemplo `http://192.168.1.50:5187`, usando su IP real. Un enlace que dice `localhost` sólo sirve en esa misma computadora. Para jugar desde distintas casas hace falta alojar el servidor en Internet con HTTPS y almacenamiento persistente.

El navegador conserva una credencial privada para recuperar el asiento; el enlace compartido sólo contiene el código de sala. “Volver al modo local” recupera la partida local previa. La partida online permanece guardada. Si alguien se desconecta durante su turno, se espera su regreso; no se lo reemplaza por una IA ni se juega por él.

Para guardar salas en PostgreSQL, copiar `.env.example` a `.env`, completar la contraseña y ejecutar `npm run db:init`. La plantilla usa el puerto 5433. Sin configuración se conserva el guardado en archivo para desarrollo.

Configuración, límites y pruebas: [docs/online.md](docs/online.md).

Para versionar el código y actualizar el servidor desde GitHub: [guía de Git](docs/github.md).

## Qué incluye

- Tablero de 42 casilleros con fichas interactivas.
- Seis piezas para elegir: gaucho, bota, perro, caballo, mate y gallo.
- Sorteo de salida, dados, dobles, turnos, Descanso y comisaría según el reglamento 60 Aniversario.
- Dados que ruedan y cambian de cara, fichas que saltan entre casilleros y sonidos con control de silencio. El recorrido también representa retrocesos y traslados a Comisaría.
- Compra de campos, ferrocarriles y compañías; reclamo de alquileres y premios antes de la próxima tirada.
- Provincias completas, construcción pareja de chacras y estancias.
- 32 tarjetas de Suerte y Destino, con mazos rotativos y sus efectos.
- Ventana al recibir Suerte o Destino, casilla del jugador de turno resaltada y escritura ampliada con precio y alquileres al ofrecer una compra.
- Hipotecas, levantamientos, ventas de mejoras, propuestas de venta y remates.
- Deudas antes de la quiebra y remate de bienes entregados al banco.
- Consulta de tarjetas y cartera de títulos.
- Guardado automático local y guardado de salas online en el servidor, con recuperación del asiento y de la partida.
- Diseño adaptable y controles de tablero accesibles por teclado.

## Funciones pendientes

Copropiedad, trueques simultáneos de paquetes, variantes de partida corta, inteligencia artificial, chat y emparejamiento público. El juego en red ya está implementado mediante salas privadas. El juego local incluye hipotecas, remates, compraventas y una etapa para reunir dinero antes de quebrar.

## Archivos

- `web/game.js`: reglas, deudas, remates, transacciones y validación del estado.
- `web/cards.js`: 32 cartas y descripción de sus efectos.
- `web/pieces.js`: definición y presentación de las seis piezas.
- `web/app.js`: tablero SVG, turnos, diálogos y presentación local/online.
- `web/online.js`: conexión, credenciales, recuperación y confirmación de jugadas.
- `web/experience.js`: animación de dados y recorrido, sonidos sintetizados y preferencia de silencio.
- `server/rooms.js`: salas, permisos por jugador, persistencia y acciones idempotentes.
- `server/postgres-rooms.js`: persistencia por sala en PostgreSQL con transacciones.
- `server/storage.js`: selección y configuración del almacenamiento.
- `server/app.js`: servidor HTTP y comunicación Socket.IO.
- `web/geometry.js`: coordenadas de los casilleros y ubicación de las fichas.
- `web/style.css`: mesa, fichas y diseño adaptable.
- `tests/game.test.js`: pruebas de reglas, bancarrota, guardado y simulaciones.

No incluye analítica, cuentas de terceros ni fuentes remotas. Socket.IO se sirve desde el mismo servidor del juego.
