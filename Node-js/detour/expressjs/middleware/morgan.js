import express from "express";
const app = express();
import morgan from "morgan";
app.use(morgan("dev"));//mostly used when we use middleware such as oyur body parser and morgan itself.

const port = 3000;

app.get('/', (req, res) => {
    res.send("hello there.");
});
app.listen(port, () => {
    console.log(`your server is up and running on port ${port}`);
});