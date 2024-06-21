import express from "express";
import { userRouter } from "./routes/user.js";
const app = express();

app.use("/", userRouter);

app.listen(3000, () => {
  console.log("server is up and running at 3000.");
});
