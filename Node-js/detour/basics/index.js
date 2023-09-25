// console.log("hello there i am using node js");
const fs = require("fs");

fs.writeFile('message.txt', 'hello there i am using node js.', (err) => {
    if (err) throw err;
    console.log("file has been created and saved successfully.")
});
// writeFile function is part of core or native module of node js which falls under file system module 'fs'.
//writefile(filename,'content that goes inside of the file itself',callback).
fs.readFile('message.txt', 'utf-8', (err, data) => {
    if (err) throw err;
    console.log(data);
});
// readFile function is part of core or native module of node js which falls under file system module 'fs'.
//readfile(path,callback).