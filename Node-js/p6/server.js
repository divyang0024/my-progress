const express = require("express");
const https = require("https");
const bp = require("body-parser");
const app = express();
app.use(bp.urlencoded({ extended: true }));
app.get("/", (req, res) => {
    res.sendFile(__dirname + "/form.html");
});
app.post("/r.html", (re, res) => {
    const url = "https://api.openweathermap.org/data/2.5/weather?q=" + re.body.city + "&appid=b8ce742ac6484e3440a7b8eb2d250758&units=metric";
    https.get(url, (res) => {
        // console.log(res);
        res.on("data", (data) => {
            let d = JSON.parse(data);
            // console.log(d.coord.lon);
            console.log(`the temperature in ${re.body.city} is currently ${d.main.temp}°C.`);
        })
    });
    res.send();
});
app.listen(3000, (req, res) => {
    console.log("server is up and running at port 3000.");
});