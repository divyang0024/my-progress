import { connectDB } from "./db/connect.js";
import { Pokemon } from "./models/pokemons.js";
import fs from "fs";
import "dotenv/config.js";

const loadJSON = (path) => JSON.parse(fs.readFileSync(new URL(path, import.meta.url)));
const pokemonJson = loadJSON('./pokemons.json');

let start = async () => {
    try {
        await connectDB(process.env.MONGO_URI);
        console.log("connected successfully!!!!.");
        await Pokemon.deleteMany();
        await Pokemon.create(pokemonJson);
        console.log("data inserted into database successfully!!!!.");
    } catch (error) {
        console.log(error);
    }
}

start();