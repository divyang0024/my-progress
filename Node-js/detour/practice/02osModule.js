const os = require("os");
//os module is an in-built module that deals with operating sytem as well as server.

let ut_sec = os.uptime(); //it basically tells for how long your system is up.
let ut_min = ut_sec / 60;
let ut_hour = ut_min / 60;

console.log(ut_sec);
console.log(ut_min);
console.log(ut_hour);

ut_sec = Math.floor(ut_sec);
ut_min = Math.floor(ut_min);
ut_hour = Math.floor(ut_hour);

ut_hour = ut_hour % 60;
ut_min = ut_min % 60;
ut_sec = ut_sec % 60;

console.log(
  "Up time: " +
    ut_hour +
    " Hour(s) " +
    ut_min +
    " minute(s) and " +
    ut_sec +
    " second(s)"
);

console.log(os.userInfo()); //show user information.
console.log(os.type()); //system name
console.log(os.release()); //system version
console.log(os.freemem()); //free memory
console.log(os.totalmem()); //totol memory
