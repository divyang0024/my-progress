const express = require("express");
const app = express();

app.get("/", (req, res) => {
    res.send("<h1>this is home page.</h1>");
});
app.get("/contact", (req, res) => {
    res.send("<h1>this is contact-us page.</h1>");
});
app.get("/about", (req, res) => {
    res.send("<h1>this is about page.</h1>");
});
app.listen(4000, (req, res) => console.log("server is up and running at port 6000."));