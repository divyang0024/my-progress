import express from "express";
import { dirname as dn } from "path";
import { fileURLToPath as Url } from "url";
import bp from "body-parser";
const port = 3000;
const app = express();
app.use(bp.urlencoded({ extended: true }));
const _dirname = dn(Url(import.meta.url));

app.listen(port, () => {
    console.log(`server is up and running on port ${port}`);
});

app.get('/', (req, res) => {
    res.sendFile(`${_dirname}/index.html`);
});
app.post('/submit', (req, res) => {
    console.log(req.body);
});