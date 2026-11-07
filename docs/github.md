# Código en GitHub y actualizaciones

## Preparación local

Crear en https://github.com/new un repositorio llamado `estanciero` en la cuenta `mebarg`, preferentemente privado. Dejarlo vacío, sin README, licencia ni .gitignore: estos archivos ya existen localmente.

Desde la terminal local, en la carpeta de este proyecto:

```sh
git init -b main
git add .
git diff --cached --stat
git commit -m "Versión moderna de Estanciero con salas online y PostgreSQL"
git remote add origin git@github.com:mebarg/estanciero.git
git push -u origin main
```

La URL SSH requiere una clave autorizada en GitHub. Si se usa HTTPS, reemplazar el remoto por `https://github.com/mebarg/estanciero.git` y usar el mecanismo de autenticación de GitHub configurado en el equipo.

El `.gitignore` excluye `.env`, partidas, dependencias, compilados, paquetes del servidor, instaladores, archivos personales PDF y originales duplicados. Los recursos utilizados por la aplicación en `web/assets/` y los datos recuperados usados por las pruebas sí se conservan. Revisar los archivos preparados antes del primer commit.

## Primera instalación del servidor desde Git

La carpeta actual subida por paquete todavía no es un clon. Clonar primero el repositorio en una carpeta nueva, sin borrar la instalación que funciona. Para un repositorio privado, configurar acceso de lectura mediante una clave SSH del servidor o una deploy key.

```sh
git clone git@github.com:mebarg/estanciero.git estanciero-git
cd estanciero-git
npm ci --omit=dev
```

Copiar a esta carpeta el `.env` de la instalación actual, conservar el puerto HTTP y PostgreSQL en 5433, y ejecutar `npm run db:init`. Luego ajustar PM2 para que su directorio de trabajo y su script apunten a esta nueva carpeta (`scripts/serve.mjs`). Revisar la configuración actual con `pm2 describe estanciero` antes de cambiarla. Conservar una sola instancia y ejecutar `pm2 save` tras comprobar el arranque. La base PostgreSQL no se mueve con el código.

## Actualizaciones siguientes

En desarrollo, después de revisar y probar los cambios:

```sh
git add .
git commit -m "Descripción del cambio"
git push
```

En el servidor, desde el clon que ejecuta PM2:

```sh
git pull --ff-only
npm ci --omit=dev
npm run db:init
pm2 restart estanciero
```

Ejecutar cada comando sólo si el anterior terminó bien. No se necesita build: Node sirve directamente `web/`. `.env` y PostgreSQL quedan fuera de Git. El reinicio corta las conexiones brevemente; las salas guardadas y credenciales permiten retomarlas.
