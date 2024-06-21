import express from "express";
import path from "path";
import { router } from "./routes/url.js";
import { staticrouter } from "./routes/staticRouter.js";
import { connectDB } from "./connect.js";
import { userRouter } from "./routes/user.js";
import cookieParser from "cookie-parser";
import { restrictUserIfNotLoggedin } from "./middlewares/auth.js";

const app = express();
const PORT = 3000;
const URI = "mongodb://127.0.0.1:27017/urlshortener";

app.set("view engine", "ejs");
app.set("views", path.resolve("./views"));

app.use(cookieParser());
app.use("/URL", restrictUserIfNotLoggedin, router);
app.use("/", staticrouter);
app.use("/user", userRouter);

const start = () => {
  app.listen(PORT, () => {
    console.log(`server is up and running port ${PORT}`);
  });
  connectDB(URI);
};

start();
