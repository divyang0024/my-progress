import express from "express";
const app = express();

// app
//   .use((req, res, next) => {
//     req.counter = 10;
//     console.log("mw 1", req.counter);
//     next();
//   })
//   .use((req, res, next) => {
//     req.counter += 1;
//     console.log("mw 2", req.counter); will also be accesible here from the previous router.
//     next();
//   })
//   .route("/")
//   .get((req, res) => {
//     res.send("this is home page.");
//   });

let mw1 = (req, res, next) => {
  req.counter = 10;
  console.log("mw 1", req.counter);
  next();
};
let mw2 = (req, res, next) => {
  req.counter += 1;
  console.log("mw 2", req.counter);
  next();
};

app.get("/", [mw1, mw2], (req, res) => {
  res.json({ msg: "hello there" });
});

app.listen(3000, () => {
  console.log(`server is up and running at port ${3000}.`);
});
