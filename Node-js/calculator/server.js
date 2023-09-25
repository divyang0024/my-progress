const express = require("express");
const bodyParser = require("body-parser");
const app = express();
app.use(bodyParser.urlencoded({ extended: true }));
app.listen(4501);
app.get("/bmiCalculator", function (req, res) {
    res.sendFile(__dirname + "/bmiCalculator.html")
});
// In metric units: BMI = weight(kg) ÷ height2(meters)
app.post("/bmiCalculator", function (req, res) {
    let h = Number(req.body.height);
    let w = Number(req.body.weight);
    let bmi = (w / (h * h));
    res.send("Your BMI is " + bmi);
});