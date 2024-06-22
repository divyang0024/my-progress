import jwt from "jsonwebtoken";
const secret = "the 15 domergue gang members never existed.";

const setUser = (user) => {
  return jwt.sign(
    {
      name: user.name,
      email: user.email,
    },
    secret
  );
};

const getUser = (token) => {
  if (!token) return null;

  try {
    const userPayload = jwt.verify(token, secret); //return payload mentioned at line:6
    console.log(userPayload);
    return userPayload;
  } catch (err) {
    return null;
  }
};

export { setUser, getUser };
