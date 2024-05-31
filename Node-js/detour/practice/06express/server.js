import express from "express";
import path from "path";
const app = express();

app.use(express.static("./public"));

app.get("/", (req, res) => {
  res.sendFile(path.resolve("index.html"));
});
app.get("/about", (req, res) => {
  res.send("this is about page.");
});
app.get("*", (req, res) => {
  res.status(404).send("page not  found");
});
app.listen(3000, () => {
  console.log("server is up and running at port 3000.");
});
