import express from "express";
import * as ctrlr from "../controllers/index.controllers.js"
export const router = express.Router();


router.route('/').get(ctrlr.getHomePage);
router.route('/about').get(ctrlr.getAboutPage);


// module.exports = router;
// export { router }; 