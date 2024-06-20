import express from "express";
import * as urlController from "../controllers/url.js";
const router = express.Router();

router
  .use(express.urlencoded({ extended: false }))
  .post("/", urlController.handleGenrateNewUrlShortURL);
router.get("/:shortId", urlController.handleRedirection);
router.get("/analytics/:shortId", urlController.handleAnalytics);

export { router };
