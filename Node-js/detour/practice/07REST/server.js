import express from "express";
import users from "./fakeData.json" assert { type: "json" };
import fs from "fs";

const app = express();

app.use(express.urlencoded({ extended: false }));

app.get("/users", (req, res) => {
  const html = `<ul>
  ${users
    .map((users) => `<li>${users.first_name}</li>`)
    .join("------------------------------------------------------------------")}
  </ul>`;
  res.send(html);
});

app
  .route("/api/users")
  .get((req, res) => {
    res.json(users).end();
  })
  .post((req, res) => {
    {
      const id = users.length + 1;
      const newData = req.body;
      users.push({ id, ...newData });
      fs.writeFile("./fakeData.json", JSON.stringify(users), (err, result) => {
        if (err) {
          res.end("error while adding new user.");
        } else {
          res.json({ data: users[users.length - 1] });
        }
      });
    }
  });

app
  .route("/api/users/:id") //it links the http methods using same path
  .get((req, res) => {
    const id = Number(req.params.id);
    const user = users.find((user) => user.id == id);
    res.json(user).end();
  })
  .patch((req, res) => {
    res.json({
      status: "pending",
    });
  })
  .delete((req, res) => {
    res.json({
      status: "pending",
    });
  });

app.listen(3000, () => {
  console.log("server is up and running at port 3000.");
});
