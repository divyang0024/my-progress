const express = require("express");
const app = express();
const bodyparser = require("body-parser");
const request = require("request");
app.use(express.static("public"));
app.use(bodyparser.urlencoded({ extended: true }));
app.listen(3000, () => console.log("server is running on port 3000."));
app.get("/", (req, res) => {
    res.sendFile(__dirname + "/signup.html");
});
app.post("/", (req, res) => {
    const fname = req.body.Fname;
    const lname = req.body.Lname;
    const email = req.body.Email;
    console.log(fname + " " + lname + " " + email);
    res.send();
});
// 864571ee3067194eaba6e103e8c8fa08 - us11
// bda2f05ff4