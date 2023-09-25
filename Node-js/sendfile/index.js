const express = require('express');
const app = express();
app.use(express.static("public"));
app.listen(9999);
app.get("/", (r, rp) => {
});
app.get("*", (r, rp) => {
    // rp.sendFile(__dirname + "/public/help.html");
    rp.sendFile(__dirname + "/error.html");//* if file name is not right.
});