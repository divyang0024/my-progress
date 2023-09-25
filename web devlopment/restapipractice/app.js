import express from "express";
import { connectDB } from "./db/connect.js";
import "dotenv/config";
import { router } from "./routes/pokeroute.js";

const app = express();
const port = 3000;

app.get('/', (req, res) => {
    res.send("this is home page.");
});

app.use("/api/pokemons", router);

let start = async () => {
    try {
        app.listen(port, () => {
            console.log(`server is up and running on port ${port}!!!!.`);
        });
        await connectDB(process.env.MONGO_URI);
        console.log("connected to the mongo server!!!!.");
    } catch (error) {
        console.log(error);
    }
}

start();