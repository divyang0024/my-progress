import express from "express";
import body_parser from "body-parser";
const port = 3000;
const app = express();
app.use(body_parser.urlencoded({ extended: true }));

app.get('/', (req, res) => {
    res.render("index.ejs");
});
app.get('/data', (req, res) => {
    res.render("data.ejs");
});
app.post('/submit', (req, res) => {
    let name = req.body['name'];
    let age = req.body.age;
    res.render("data.ejs", { name: name, age: age });
});
app.listen(port, () => {
    console.log(`server is up and running on port ${port}`);
});