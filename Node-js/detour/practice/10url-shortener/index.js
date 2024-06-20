import express from "express";
import path from "path";
import { router } from "./routes/url.js";
import { staticrouter } from "./routes/staticRouter.js";
import { connectDB } from "./connect.js";
const app = express();
const PORT = 3000;
const URI = "mongodb://127.0.0.1:27017/urlshortener";

app.set("view engine", "ejs");
app.set("views", path.resolve("./views"));
app.use("/URL", router);
app.use("/", staticrouter);

const start = () => {
  app.listen(PORT, () => {
    console.log(`server is up and running port ${PORT}`);
  });
  connectDB(URI);
};

start();
