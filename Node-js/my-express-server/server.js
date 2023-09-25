//jshint esversion:6
const express = require("express");
const app = express();
app.listen(3000, () => {
    console.log("server made successfully!!!!.");
});
app.get("/", function (req, res) {
    res.send("<h1>hello there!!!!.</h1>");
});
app.get("/contact", (req, res) => res.send("<h1>My Email : divyang1234@gmail.com</h1>"));
app.get("/about", (req, res) => res.send("<h1>My Name is divyang mundotia,and i am learning full stack devlopment.</h1>"));