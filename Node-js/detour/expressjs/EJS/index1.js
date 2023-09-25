import express from "express";
const app = express();
const port = 3000;
import { dirname } from "path";
import { fileURLToPath } from "url";
const ejs_Path = dirname(fileURLToPath(import.meta.url));
app.get('/', (req, res) => {
    const data = {
        title: "EJS Tags",
        seconds: new Date().getSeconds(),
        items: ["apple", "banana", "cherry"],
        htmlContent:
            "<em>this is some em text</em>"
    };
    res.render(`${ejs_Path}/views/index1.ejs`, data);
});
app.listen(port, () => {
    console.log(`the server is up and running on port ${port}`);
});