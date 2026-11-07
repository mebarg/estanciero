FROM node:22-alpine
WORKDIR /app
COPY package.json package-lock.json ./
RUN npm ci --omit=dev
COPY server ./server
COPY web ./web
COPY scripts ./scripts
RUN mkdir -p /app/data && chown -R node:node /app/data
USER node
ENV PORT=5187
ENV ESTANCIERO_DATA_DIR=/app/data
EXPOSE 5187
CMD ["node", "scripts/serve.mjs"]
