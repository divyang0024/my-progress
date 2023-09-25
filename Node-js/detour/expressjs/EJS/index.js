import express from "express";
const app = express();
import { dirname as ejspath } from "path";
import { fileURLToPath as ejsurl } from "url";
const ejsfile = ejspath(ejsurl(import.meta.url));

app.get('/', (req, res) => {
    let date = new Date();
    let today = date.getDay();
    let d = " weekday";
    let a = " work hard";
    if (today === 0 || today === 6) {
        let d = " weekend";
        let a = " enjoy";
    }
    res.render(`${ejsfile}/views/index.ejs`, { day: d, adv: a });
});

app.listen(3000, () => {
    console.log("server is up and running on port 3000");
});
// ejs tags:

// <%= %>(js output) : will be interpreted by javascript and it is responsible for showing the content in the form of output.

// <% %>(js execute) : it will js commands as it is but it is interpreted inside of ejs file.

// <%- %>(render html):it renders html tags.

// <%% %%>(escape):used for character escape so it can be treated as plain text.

// <%# %>(comment):everthing comming between this is interpreted as a comment but not as code.

// <%-include("header.js")%>(loading another ejs) : it will load another ejs file inside of currently running ejs file.