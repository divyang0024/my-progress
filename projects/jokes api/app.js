import express from "express";
import { router } from "./routes/approutes.js";
import "dotenv/config.js";
import { connectDB } from "./db/connect.js"

const app = express()
const PORT = process.env.port || 3000;

app.use("/api", router);

let start = async () => {
    try {
        app.listen(PORT, () => {
            console.log(`server is up and running at port ${PORT}!!!!`);
        });
        await connectDB(process.env.URI);
        console.log("connected server with mongo atlas!!!!.");
    } catch (error) {
        console.log(error);
    }
}

start();