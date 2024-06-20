import express from "express";
import { connectDB } from "./connectDB.js";
import { router } from "./routes/user.js";
import { writeLogs } from "./middlewares/index.js";
const URI = "mongodb://127.0.0.1:27017/myDB";
const app = express();
const PORT = 3000;

app.use(writeLogs("logs.txt"));
app.use("/users", router);

const start = async () => {
  app.listen(PORT, () => {
    console.log(`server is up and running at PORT : ${PORT}.`);
  });
  try {
    await connectDB(URI);
    console.log("server is connected to mongo.");
  } catch (err) {
    console.log(err);
  }
};

start();
