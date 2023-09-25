const mw = require('./mw');
const express = require('express');
const app = express();
const route = express.Router();

route.use(mw);
app.listen(4500);
app.get("/", (r, resp) => {
    resp.send("home page");
});
app.get("/help", mw, (r, resp) => {
    resp.send("help page");
});
route.get("/user", (r, resp) => {
    resp.send("user page");
});

app.use("/", route);