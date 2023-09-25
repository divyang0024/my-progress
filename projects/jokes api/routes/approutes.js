import express from "express";
import * as appControls from "../controllers/appcontrollers.js";
import bodyParser from "body-parser";


const router = express.Router();

router.route('/random').get(appControls.getRandomJokes);
router.route('/jokes/:id').get(appControls.getSpecificjoke);
router.route('/filter').get(appControls.getJokeByType);
router.use(bodyParser.urlencoded({ extended: true })).route('/jokes').post(appControls.addNewJoke);
router.use(bodyParser.urlencoded({ extended: true })).route('/jokes/:id').put(appControls.editJokeAndType);
router.use(bodyParser.urlencoded({ extended: true })).route('/jokes/:id').patch(appControls.editJokeOrType);
router.route('/jokes/:id').delete(appControls.deleteJoke);

export { router };