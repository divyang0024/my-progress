import fs from "fs";

const writeLogs = (file) => {
  return (req, res, next) => {
    fs.appendFile(file, `${req.method}-${req.ip}-${req.path}\n`, (err, res) => {
      next();
    });
  };
};

export { writeLogs };
