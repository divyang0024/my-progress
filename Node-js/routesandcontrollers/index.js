import express from "express";
const app = express();
const PORT = 3000;
import { router } from "./routes/index.routes.js";

app.use("/", router);

let start = async () => {
    try {
        await app.listen(PORT, () => {
            console.log(`server is up and running at port ${PORT}`);
        });
    }
    catch (error) {
        console.log(`server not connected : ${error}`);
    }
}

start();