const { response } = require("express");
const express = require("express");
const https = require("https");
const app = express();
const bodyParser = require("body-parser");
app.use(bodyParser.urlencoded({ extended: true }));
app.listen(3000, () => console.log("server is up and running!!!!."));
app.get("/", (req, res) => {
    res.sendFile(__dirname + "/index.html");
});
app.post("/", (req, res) => {
    const api_endpoint = "https://api.openweathermap.org/data/2.5/weather?q=" + req.body.city + "&appid=b8ce742ac6484e3440a7b8eb2d250758&units=metric";
    https.get(api_endpoint, (response) => {
        console.log(response.statusCode);
        response.on("data", (data) => {
            const obj_API = JSON.parse(data);
            const api_icon = obj_API.weather[0].icon;
            const icon_url = `https://openweathermap.org/img/wn/${api_icon}@2x.png`;
            res.write(`<h1>the temprature in ${req.body.city} is ${obj_API.main.temp} degree celsius.</h1>`);
            res.write(`<h1>it's  ${obj_API.weather[0].description} outside.</h1>`);
            res.write(`<img src=${icon_url}>`);
            res.send();
        });
    });
});