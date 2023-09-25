const fs = require("fs");

fs.writeFileSync("file1.txt", "this is file one.");
fs.readFile("file1.txt", 'utf8', (err, files) => {
    if (!err) {
        console.log("read operation performed successfully.");
    }
    console.log(files);
});
fs.appendFile("file1.txt", " file has been appended.", (err) => {
    if (!err) {
        console.log("append operation performed successfully.");
    }
});
fs.rename("file1.txt", "file2.txt", (err) => {
    if (!err) {
        console.log("rename operation performed successfully.");
    }
})
// fs.unlinkSync("file1.txt");