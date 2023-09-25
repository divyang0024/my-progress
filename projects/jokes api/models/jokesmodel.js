import mongoose from "mongoose";

const jokesSchema = new mongoose.Schema({
    id: {
        type: Number,
        required: true
    },
    jokeText: {
        type: String,
        required: true
    },
    jokeType: {
        type: String,
        required: true
    }
});

const Joke = mongoose.model("Joke", jokesSchema);

export { Joke }; 