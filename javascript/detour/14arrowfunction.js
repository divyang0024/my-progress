console.log(this); //since we are running it inside of node enviorment it will return an empty object, but if it was for browser it would have return Window object.
let fun = function () {
  console.log(this);
}; //it will return an object.
console.log(fun());

//when {} is used with arrow function it is necessary to use return for explicit return.
let fun2 = () => {
  console.log(this); //returns empty object.
};
console.log(fun2());
//when {} is not used with arraow funtion it will implicitly return value we will not habe to put return.
let fun3 = () => "this is function 3";
let str = fun3();
console.log(str);
