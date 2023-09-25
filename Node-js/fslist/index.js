const fs = require("fs");
const path = require("path");
const dirpath = path.join(__dirname, "dir1");
for (let i = 0; i < 5; i++) {
    fs.writeFileSync(dirpath + `/file${i + 1}.txt`, `this is file${i + 1}.`);
}
fs.readdir(dirpath, (err, files) => {
    files.forEach(index => console.log(index));
});