const express = require('express');
const app = express();
app.listen(3000);
app.get("/", (req, resp) => { resp.send("this is the home page.") });
app.get("/about", (req, resp) => { resp.send("this is the about page.") });
app.get("/help", (req, resp) => { resp.send("this is the help page.") });