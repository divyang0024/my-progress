const userSessionToID = new Map();

const setUser = (id, user) => {
  userSessionToID.set(id, user);
};
const getUser = (id) => {
  return userSessionToID.get(id); //return value
};

export { setUser, getUser };
