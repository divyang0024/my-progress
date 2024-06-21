import express from "express";
import { v4 as generateSession } from "uuid";
import { verifyCookie } from "../middlewares/user.js";
import { setUser } from "../service/user.js";
import cookieParser from "cookie-parser";
const userRouter = express.Router();

userRouter.use(cookieParser()).get("/", verifyCookie, (req, res) => {
  res.end("hello there");
});

userRouter.get("/restrict", (req, res) => {
  res.end("you have benn restricted.");
});
userRouter.get("/makecookie", (req, res) => {
  const userSession = generateSession();
  setUser(userSession);
  res.cookie("uid", userSession);
  res.end("cookie made successfully");
});

export { userRouter };
