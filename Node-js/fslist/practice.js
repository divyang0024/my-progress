const fs = require("fs");
const path = require("path");
const curdir = path.join(__dirname, "dir1");
for (let i = 0; i < 5; i++) {
    fs.unlinkSync(`${curdir}/file${i + 1}.txt`);
}