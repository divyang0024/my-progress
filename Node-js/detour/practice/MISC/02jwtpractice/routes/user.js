import express from "express";
import { verifyCookie } from "../middlewares/user.js";
import { setUser } from "../service/user.js";
import cookieParser from "cookie-parser";
const userRouter = express.Router();

userRouter.use(cookieParser()).get("/", verifyCookie, (req, res) => {
  res.end("hello there");
});

userRouter.get("/restrict", (req, res) => {
  res.end("you have been restricted.");
});
userRouter.get("/makecookie", (req, res) => {
  const user = {
    name: "divyang",
    email: "divyang@gmail.com",
  };
  const token = setUser(user);
  res.cookie("uid", token);
  res.end("cookie made successfully");
});

export { userRouter };
