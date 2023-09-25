import express from "express";
const app = express();
const port = 3000;
function logger(req, res, next) {
    // console.log(typeof (req));obj
    // console.log(typeof (res));obj
    // console.log(typeof (next));function
    console.log(req.method);
    console.log(req.url);
    next();
}
app.use(logger);//custom middleware

app.get('/', (req, res) => {
    res.send("hello there.");
});
app.listen(port, () => {
    console.log(`server is up and running on port : ${port}`)
});