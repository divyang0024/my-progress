import express from "express";
const app = express();
const port = 3000;

app.listen(port, () => {
    console.log(`server is up and running on ${port}!!!!.`);
});

app.get("/", (req, res) => {
    res.sendStatus(200);
    // gets the resources
});
app.post("/contacts", (req, res) => {
    res.sendStatus(200);
    // post the resources
});
app.put("/aboutme", (req, res) => {
    res.sendStatus(200);
    // update the resources
});
app.patch("/author", (req, res) => {
    res.sendStatus(200);
    // patch the resources
});
app.delete("/author/divyang", (req, res) => {
    res.sendStatus(200);
    // delete the resources
});