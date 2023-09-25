import { Joke } from "../models/jokesmodel.js";

//get a random data.
const getRandomJokes = async (req, res) => {
    const numberOfJoke = await Joke.find({});
    let jokeId = Math.floor(Math.random() * numberOfJoke.length);
    const myData = numberOfJoke[jokeId];
    console.log(numberOfJoke);
    res.status(200).json(myData);
};

//get a specific joke by using id.
const getSpecificjoke = async (req, res) => {
    const jokeId = req.params.id;
    let myData = await Joke.find({ id: jokeId });
    if (myData == 0) {
        res.json({ msg: `id : ${jokeId} do not exist!!!!.` }).status(404);
    }
    else {
        res.status(200).json(myData);
    }
}

//get jokes by thier type.
const getJokeByType = async (req, res) => {
    const queryObject = {};
    const { jokeType } = req.query;
    if (jokeType) {
        queryObject.jokeType = { $regex: jokeType, $options: 'i' };
    }
    const myData = await Joke.find(queryObject);
    res.status(200).json(myData);
}

//add new joke
const addNewJoke = async (req, res) => {
    const newId = (await Joke.find({})).length + 1;
    const myData = await Joke.create({ id: newId, jokeText: req.body.text, jokeType: req.body.type });
    res.status(200).json({ myData });
};

//append both joke and its type by id.
const editJokeAndType = async (req, res) => {
    await Joke.findOneAndUpdate({ id: req.params.id }, { $set: { jokeText: req.body.text, jokeType: req.body.type } });
    const myData = await Joke.find({ id: req.params.id });
    if (myData == 0) {
        res.json({ msg: `id : ${req.params.id} do not exist!!!!.` }).status(404);
    }
    else {
        res.status(200).json(myData);
    }
}

//append either joke or type by id.
const editJokeOrType = async (req, res) => {

    const myData = await Joke.findOne({ id: req.params.id });
    if (myData == null) {
        res.json({ msg: `id : ${req.params.id} do not exist!!!!.` }).status(404);
    }
    else {
        const existingJoke = await Joke.findOne({ id: req.params.id }, '-_id -__v -id -jokeType');
        const existingType = await Joke.findOne({ id: req.params.id }, '-_id -__v -id -jokeText');
        const { jokeText } = existingJoke;
        const { jokeType } = existingType;
        const newJoke = req.body.text || jokeText;
        const newType = req.body.type || jokeType;
        await Joke.findOneAndUpdate({ id: req.params.id }, { $set: { jokeText: newJoke, jokeType: newType } });
        res.status(200).json(myData);
    }
}

//delete joke.
const deleteJoke = async (req, res) => {
    const myData = await Joke.findOne({ id: req.params.id });//if findone finds nothing it reurns null and find finds nothing it returns an empty array with length 0
    if (myData == null) {
        res.json({ msg: `id : ${req.params.id} do not exist!!!!.` }).status(404);
    }
    else {
        res.status(200).json(myData);
        await Joke.deleteOne({ id: req.params.id });
        console.log(`succesfully deleted joke with id : ${req.params.id}!!!!.`);
    }
}

export {
    getRandomJokes,
    getSpecificjoke,
    getJokeByType,
    addNewJoke,
    editJokeAndType,
    editJokeOrType,
    deleteJoke
};