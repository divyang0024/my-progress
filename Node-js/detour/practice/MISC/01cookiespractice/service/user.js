const storeCookie = new Map();

const setUser = (id) => {
  const user = {
    name: "userx",
  };
  storeCookie.set(id, user);
};

const getUser = (id) => {
  console.log(storeCookie);
  return storeCookie.get(id);
};

export { setUser, getUser };
