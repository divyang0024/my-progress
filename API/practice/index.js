import express from "express";
import body_parser from "body-parser";
import axios from "axios";

const app = express();
const port = 3000;
const url = "https://pokeapi.co/api/v2/pokemon";

app.get('/', async (req, res) => {
    const result1 = await axios.get("https://pokeapi.co/api/v2/pokemon");
    const poke_data = result1.data;
    let random_key = Math.floor(Math.random() * poke_data.results.length);
    const pokemon = poke_data.results[random_key];
    const pokemon_name = pokemon.name;
    const result2 = await axios.get(`https://pokeapi.co/api/v2/pokemon/${random_key}`);
    const result3 = await axios.get(`https://pokeapi.co/api/v2/pokemon-form/${random_key}`);
    const abilty_data = result2.data;
    const pokemon_image = result3.data.sprites.front_default;
    const pokemon_ability = abilty_data.abilities[0].ability['name'];
    res.render('index.ejs', { name: pokemon_name, ability: pokemon_ability, image: pokemon_image });
});


app.listen(port, () => {
    console.log(`server is up and running at port ${port}`)
});