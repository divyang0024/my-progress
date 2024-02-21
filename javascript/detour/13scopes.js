// fun1();
// var fun1 = () => console.log("hello there.");
fun1 = function () {
  console.log("hello there.");
}; //when functions are used as an expression it can no longer be hoisted.
fun2();
function fun2() {
  console.log("hello there.");
}
