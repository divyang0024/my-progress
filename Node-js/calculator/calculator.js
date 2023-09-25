const express = require("express");
const bodyParser = require("body-parser");

const app = express();
app.use(bodyParser.urlencoded({ extended: true }));
app.listen(3000, () => { console.log("server made successfully!!!! with port:3000.") });
app.get("/", (req, res) => {
    res.sendFile(__dirname + "/index.html");
});
app.post("/", (req, res) => {
    var n1 = Number(req.body.num1);
    var n2 = Number(req.body.num2);
    res.send("Addition Operation : " + (n1 + n2));
});