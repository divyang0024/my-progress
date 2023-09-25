const express = require('express');
const ejs = require('ejs');
const app = express();
app.set("view engine", "ejs");
app.listen(5000);
app.get("/", (r, resp) => {
    const user = {
        name: "xyz",
        city: "ohio",
        mail: "xyx@.gmail.com",
    }
    resp.render("index", { user });
});