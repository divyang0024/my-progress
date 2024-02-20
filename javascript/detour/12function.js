function fun1() {
  console.log("function 1 is invoked.");
}
let fun2 = function () {
  console.log("function 2 is invoked.");
};

let fun3 = (num1, num2, ...arr) => {
  return arr;
}; //when we dont have any clue about how many arguments will be passed in the arguments we use rest operator(...).

fun1();
let array = fun3(200, 12, 1212, 121224, 324445);
console.log(array);
