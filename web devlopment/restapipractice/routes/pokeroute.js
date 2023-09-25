import express from "express";
import { getpokedetails } from "../controllers/pokecontrols.js";

const router = express.Router();

router.route('/').get(getpokedetails);

export { router };