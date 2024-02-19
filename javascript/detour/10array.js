//in javascript array are of dynamic size.
//an array can have diffrent types of values.
//array are indexed and not associative.
//since array are non-primitives ,when a copy is send to another array it uses a shallow copy which means both of the array will be pointing toward the same reference unlike primitive datatype which mantains deep copy.
let arr1 = [1, 2, 3, "a", "b", "c", true];
let arr2 = new Array(1, 2, 3, "a");

// array realted in-built functions.
console.log(arr1.length); //returns length of the array.
arr1.push(7); //adds a new value at the end of the array.
console.log(arr1);
arr1.pop(); //removes the last value from the array.
console.log(arr1);

arr1.unshift(12); //works just like push but it adds on a new value in the beggning of the array.
console.log(arr1);
arr1.shift(12); //works jsut like pop but removes the element from the start.
console.log(arr1);
console.log(arr1.includes("a")); //returns true or false on the basis of value specified in the parameter.
console.log(arr1.indexOf("a")); //returns index on the basis of value specified in the parameter.

console.log(arr1.slice(0, 3)); //works in the same way as string slice but it does not manipulate the original array.
console.log(arr1.splice(0, 3)); //works in the same way as string slice but it manipulates the original array.
console.log(arr1);
console.log(arr1.join("_")); //join an array in to string

// push is not ideal for merging two or different arrays togther as it treats an array as value and not the values inside of the array as individual values.
//we can use concat to merge but it merge only two array at a time.
let arr3 = arr1.concat(arr2);
console.log(arr3);
let arr4 = [...arr1, ...arr2];
console.log(arr4);
//whenever there is nested array within an array and we want to take out the value of nested array in the main array then we use flat().
let arr5 = [12, 12, 1, 212, [1, 21, 2, [1212, 12, [12, 12]]]];
console.log(arr5.flat(Infinity)); //specify from 1 to infinity.
let arr6 = Array.from("divyang"); //converts into array.
console.log(arr6);
let arr7 = Array.of(arr1[0], arr2[1], arr3[2]); //takes variable and put thier value into array.
console.log(arr7);
