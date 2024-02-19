let myDate = new Date(2001, 11, 24, 17, 2, 0, 0); //we can also specify date explicitly in date object(y,m,d,h,m,s,ms).
console.log(myDate.toLocaleString());
console.log(myDate.toISOString());
console.log(myDate.toUTCString());
console.log(myDate.toLocaleDateString());
console.log(myDate.toLocaleTimeString());
console.log(Date.now()); //it will return current time in milliseconds calculated from 1970 jan 1st utc.
console.log(myDate.getTime()); //it will return time in milliseconds calculated from 1970 jan 1st utc.
console.log(myDate.getMonth()); //returns value ranging between jan(0) to dec(11).
console.log(myDate.getDay()); //returns value ranging betweeen mon(1) to sunday(6).
console.log(
  myDate.toLocaleDateString("default", {
    dayPeriod: "long",
    weekday:"long",
    day:"numeric",
    month:"long",
    year:"numeric"
  })
);
