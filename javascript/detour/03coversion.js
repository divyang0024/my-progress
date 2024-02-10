let num="12abc";
let num1=null;
let num2;

let temp=Number(num);
console.log(typeof temp);
console.log(temp);//output will be Nan as 12abc is not a valid number.

temp=Number(num1);
console.log(typeof temp);
console.log(temp);//output will 0 for null.

temp=Number(num2);
console.log(typeof temp);
console.log(temp);//output will NaN for undefined.