import { connectDB } from "./connect.js";
import { Joke } from "../models/jokesmodel.js";
import fs from "fs";
import "dotenv/config.js";

const loadJSON = (path) => JSON.parse(fs.readFileSync(new URL(path, import.meta.url)));
const jokeJson = loadJSON('../jokes.json');

const start = async () => {
    try {
        await connectDB(process.env.URI);
        console.log("connected server with mongo atlas!!!!.");
        await Joke.deleteMany();
        await Joke.create(jokeJson);
        console.log("data inserted into the database!!!!.");
    } catch (error) {
        console.log(error);
    }
};

start();