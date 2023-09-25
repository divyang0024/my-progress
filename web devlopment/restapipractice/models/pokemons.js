import mongoose from "mongoose";

let mySchema = new mongoose.Schema({
    name: {
        type: String,
        required: true,
    },
    type: {
        type: Array,
        required: true,
    },
    abilities: {
        type: Array,
        required: true,
    },
    base_stats: {
        "HP": {
            type: Number,
            required: true,
        },
        "Attack": {
            type: Number,
            required: true,
        },
        "Defense": {
            type: Number,
            required: true,
        },
        "Special Attack": {
            type: Number,
            required: true,
        },
        "Special Defense": {
            type: Number,
            required: true,
        },
        "Speed": {
            type: Number,
            required: true,
        }
    }
});

let Pokemon = mongoose.model("Pokemon", mySchema);

export { Pokemon };