const eventEmitter = require("events");
const myEvent = new eventEmitter();

myEvent.on("greet", (name) => {
  console.log(`hello there ${name}.`);
});

setInterval(() => {
  myEvent.emit("greet", "divyang");
}, 1000);
