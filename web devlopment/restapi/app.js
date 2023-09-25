import express from "express";
import 'dotenv/config';
import { router as products_routes } from "./routes/product.js";
import { connectDB } from "./db/connect.js"
const app = express();
const port = process.env.port || 3000;

app.get('/', (req, res) => {
    res.send("<h1>hello there!!!!.</h1>");
});

app.use("/api/products", products_routes);

const start = async () => {
    try {
        await connectDB(process.env.MONGODB_URL);
        console.log("connected to mongodb!!!!.");
        app.listen(port, () => {
            console.log(`server is up and running on port ${port}.`);
        });
    }
    catch (error) {
        console.log(error);
    }
}

start();