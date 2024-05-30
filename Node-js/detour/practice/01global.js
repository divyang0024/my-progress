console.log(__dirname); //show the current directory path.
console.log("-----------------------------------------");
console.log(__filename); //show the current file path.
console.log("-----------------------------------------");
console.log(require); //used for import in commonjs.
console.log("-----------------------------------------");
console.log(module);
console.log("-----------------------------------------");
console.log(process);
setInterval(() => {
  console.log("1 seconds elpased.");
}, 1000); //invokes the function automatically upon specfied time.
