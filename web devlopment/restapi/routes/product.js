import express from "express";
const router = express.Router();
import { getAllProducts, getAllProductsTesting } from "../controllers/product.js"

router.route('/').get(getAllProducts);
router.route('/testing').get(getAllProductsTesting);

export { router }; 