import express from "express";
const staticrouter = express.Router();

staticrouter.get("/", (req, res) => {
  res.render("home");
});

staticrouter.get("/signup", (req, res) => {
  res.render("signup");
});
staticrouter.get("/login", (req, res) => {
  res.render("login");
});

export { staticrouter };
