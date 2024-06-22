import { getUser } from "../service/user.js";

const verifyCookie = (req, res, next) => {
  const token = req.cookies?.uid;
  const user = getUser(token);
  if (!user) {
    res.redirect("/restrict");
  } else {
    next();
  }
};
export { verifyCookie };
