import { connectDB } from "./db/connect.js";
import { Product } from "./models/products.js";
import 'dotenv/config';
import fs from "fs";

const loadJSON = (path) => JSON.parse(fs.readFileSync(new URL(path, import.meta.url)));

const productJson = loadJSON('./products.json');

//files like json dont need to be exported explicitly while you you to import it using assert {type:"json"};

const start = async () => {
    try {
        await connectDB(process.env.MONGODB_URL);
        console.log("successfully connected!!!!.");
        await Product.deleteMany();
        await Product.create(productJson);
        console.log("collection has been created and document has benn inserted!!!!.");
    } catch (error) {
        console.log(error);
    }
};

start();