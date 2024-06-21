import { getUser } from "../service/user.js";

const verifyCookie = (req, res, next) => {
  const sessionId = req.cookies?.uid;
  const user = getUser(sessionId);
  if (!user) {
    res.redirect("/restrict");
  } else {
    next();
  }
};
export { verifyCookie };
