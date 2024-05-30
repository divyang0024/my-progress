const path = require("path");
//it is one of many built modules in node that helps you deal with file and directory path.
console.log(path.sep); //it return platform specific seprator.
console.log(path.join("parentDir", "chilDir", "file.txt")); //concatenate paths.
console.log(path.basename(path.join("parentDir", "chilDir", "file.txt"))); //return base file or directory in this case it is file.txt.
console.log(path.resolve()); //returns absolute path.
