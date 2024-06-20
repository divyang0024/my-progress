import express from "express";
import { router } from "./routes/url.js";
import { connectDB } from "./connect.js";
const app = express();
const PORT = 3000;
const URI = "mongodb://127.0.0.1:27017/urlshortener";

app.use("/URL", router);

const start = () => {
  app.listen(PORT, () => {
    console.log(`server is up and running port ${PORT}`);
  });
  connectDB(URI);
};

start();
