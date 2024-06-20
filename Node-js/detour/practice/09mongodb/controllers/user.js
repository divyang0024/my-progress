import { User } from "../models/user.js";

const submitData = async (req, res) => {
  const body = req.body;
  if (
    !body ||
    !body.firstName ||
    !body.lastName ||
    !body.email ||
    !body.jobTitle ||
    !body.gender
  ) {
    res.json({ msg: "field is missing" });
  } else {
    const result = await User.create({
      firstName: body.firstName,
      lastName: body.lastName,
      email: body.email,
      jobTitle: body.jobTitle,
      gender: body.gender,
    });

    res.json({ msg: "success" }).status(201);
  }
};

const showData = async (req, res) => {
  const allUsers = await User.find({});
  const html = `<ul>
  ${allUsers.map((user) => `<li>${user.firstName}</li>`).join("")}
  </ul>`;
  res.send(html);
};

export { submitData, showData };
