const fs = require("fs");
const input = process.argv;
if (input[2] == "create") {
    fs.writeFileSync(input[3], input[4]);
}
else if (input[2] == "delete") {
    fs.unlinkSync(input[3]);
}
else {
    console.log("please enter a valid input!!!!.");
}