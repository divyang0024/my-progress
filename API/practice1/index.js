import express from "express";
import axios from "axios";

const app = express();
const port = 3000;
const URL = "https://pokeapi.co/api/v2/";
app.set("view engine", "ejs");
app.use(express.static("public"));

app.get('/', async (req, res) => {
    try {
        const result = await axios.get(`${URL}pokemon?limit=100000&offset=0`);
        const poke_data = result.data.results;
        const index = Math.floor(Math.random() * poke_data.length);
        const result2 = await axios.get(`https://pokeapi.co/api/v2/pokemon/${index}`);
        const result3 = await axios.get(`https://pokeapi.co/api/v2/pokemon-form/${index}`);
        const pokemon_ability = result2.data.abilities[0].ability['name'];
        const pokemon_image = result3.data.sprites.front_default;
        const pokemon = poke_data[index].name;
        res.render('index.ejs', { name: pokemon, ability: pokemon_ability, image: pokemon_image });
    }
    catch (error) {
        console.log(error.message);
    }
});

app.listen(port, () => {
    console.log(`server is up and running on port ${port}`);
});