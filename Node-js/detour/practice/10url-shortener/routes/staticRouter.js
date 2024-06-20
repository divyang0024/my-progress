import express from "express";
const staticrouter = express.Router();

staticrouter.get("/", (req, res) => {
  res.render("home");
});

export { staticrouter };
