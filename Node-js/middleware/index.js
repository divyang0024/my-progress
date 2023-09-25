const express = require('express');
const app = express();
const bp = require("body-parser");
app.use(bp.urlencoded({ extended: true }));
app.listen(3000);

const rfilter = (r, resp, next) => {
    if (!r.query.age) {
        resp.send("please enter your age.");
    }
    else if (r.query.age > 18)
        next();
    else
        resp.send("you can not access this website.");
}
app.use(rfilter);

app.get("/", (r, resp) => {
    resp.send("<h1>This is home page.</h1>");
});
app.get("/about", (r, resp) => {
    resp.send("<h1>This is about page.</h1>");
});