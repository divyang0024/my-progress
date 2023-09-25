import { Pokemon } from "../models/pokemons.js";

export const getpokedetails = async (req, res) => {
    const queryObject = {};

    const { name, type, abilities, base_stats } = req.query;
    if (name) {
        queryObject.name = { $regex: name, $options: "i" };
    };
    if (type) {
        queryObject.type = { $regex: type, $options: "i" };
    };
    if (abilities) {
        queryObject.abilities = { $regex: abilities, $options: "i" };
    };
    if (base_stats) {
        queryObject.base_stats = { $regex: base_stats, $options: "i" };
    };
    
    const myData = await Pokemon.find(queryObject);
    res.status(200).json(myData);
};