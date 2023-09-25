const express = require('express');
const body_parser = require('body-parser');
const app = express();
app.use(body_parser.urlencoded({ extended: true }));
app.get("/", (r, rp) => {
    rp.sendFile(__dirname + "/index.html");
});
app.post("/responsepage", (r, rp) => {
    rp.write(r.body.randomText + "<br>");
    rp.send();
});
app.listen(3000);