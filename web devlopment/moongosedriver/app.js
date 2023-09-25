import express from "express";
import body_parser from "body-parser";
import mongoose from "mongoose";
const app = express();
const port = 3000;
const db_uri = "mongodb://127.0.0.1:27017/usersDB";

app.set("view engine", "ejs");
app.use(body_parser.urlencoded({ extended: true }));


const user_schema = new mongoose.Schema({
    username: String,
    password: String
});

const user_table = new mongoose.model("User", user_schema);

app.get("/", (req, res) => {
    res.render("app.ejs");
});

app.post("/", async (req, res) => {
    res.render("app.ejs");
    mongoose.connect(db_uri, { useNewUrlParser: true });
    const uname = req.body.username;
    const pswd = req.body.password;

    try {
        let name = await user_table.findOne({ username: uname });
        if (name == null) {
            name = {
                username: "error"
            }
        }
        if (await user_table.find() == '') {
            console.log(`${uname} has been registered!!!!.`);
            const user_obj = {
                username: uname,
                password: pswd,
            }
            await user_table.create(user_obj);
        }
        else if (uname == name['username']) {
            console.log(await user_table.find({ username: uname }));
            console.log("user exist already please try again!!!!.");
        }
        else {
            console.log(`${uname} has been registered!!!!.`);
            const user_obj = {
                username: uname,
                password: pswd,
            }
            await user_table.create(user_obj);
        }
    } catch (error) {
        console.log(error);
    }

});
mongoose.connection.close();
app.listen(port, () => {
    console.log(`server is up and running at port ${port}!!!!.`);
});