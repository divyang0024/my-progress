const express = require("express");
const bp = require("body-parser");
const app = express();
app.use(bp.urlencoded({ extended: true }));
app.get("/", (req, res) => {
    res.sendFile(__dirname + "/calc.html");
});
app.post("/index.html", (req, res) => {
    let n1 = Number(req.body.fn);
    let n2 = Number(req.body.sn);
    let r = n1 + n2;
    res.send(`the result is ${r}`);
});
app.listen(3000);