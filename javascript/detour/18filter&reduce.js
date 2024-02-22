let arr = [2, 12, 23, 34, 56, 67, 68, 78, 89, 344];

let evenNums = arr.filter((val) => val % 2 == 0);
//it is just like forEach loop the only duifference is that it can return some values based on conditions.
console.log(evenNums);

let elem = arr.map((val) => (val + 2) * 10);
console.log(elem);
let elem1 = arr.map((val) => val + 1).map((val) => val + 1); //function chaining
console.log(elem1);

let array = [2, 3, 4, 5, 6];
let Factorial = array.reduce((factval, curVal) => factval * curVal, 1);
console.log(Factorial);
