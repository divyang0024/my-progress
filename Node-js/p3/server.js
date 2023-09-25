const express = require("express");
const app = express();
app.get('/', (req, res) => res.send("<h1>this is a heading </h1>."));
app.listen(3500, (req, res) => console.log("server is up and running on port 3500."));