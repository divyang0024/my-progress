// 'for of' is used in the case of array and string but it cant be used for objects.
// 'for in' is used for objects and it gives key of object and index of array and string.

let arr = [12, 23, 34, 45, 56, 67];
let str = "this is a string";
let object = { name: "divyang", sex: "male" };

for (let index of arr) {
  console.log(index); //directll returns a values.
}
for (let index of str) {
  console.log(index);
}
// for (let index of object) {
//   console.log(index);
// }can not work for objects

for (let index in str) {
  console.log(index);
}
for (let key in object) {
  console.log(key);
}

arr.forEach((value, index, arr) => {
  console.log(value, index, arr);
}); // only works for array.
