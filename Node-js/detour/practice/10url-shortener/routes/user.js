import express from "express";
import { handleUserSignup, handleUserLogin } from "../controllers/user.js";
const userRouter = express.Router();

userRouter
  .use(express.urlencoded({ extended: false }))
  .post("/", handleUserSignup);
userRouter
  .use(express.urlencoded({ extended: false }))
  .post("/login", handleUserLogin);

export { userRouter };
