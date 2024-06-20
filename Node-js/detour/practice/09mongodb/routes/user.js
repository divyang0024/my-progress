import express from "express";
import { showData, submitData } from "../controllers/user.js";
const router = express.Router();

router
  .use(express.urlencoded({ extended: false }))
  .route("/")
  .post(submitData)
  .get(showData);

export { router };
