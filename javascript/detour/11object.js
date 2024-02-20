let mySym = Symbol("symbol1");

let user = {
  name: "Divyang",
  "full name": "divyang mundotia",
  gender: "male",
  email: "DivyangMundotia@gmail.com",
  [mySym]: "it is symbol 1",
}; //this is a object literal but it is not a singleton object.
let user1 = new Object(); //it is singleton object.
console.table([
  user.email,
  user["email"],
  user["full name"],
  typeof user[mySym],
]);

// Object.freeze(user); //once after this statement any changes made into the object will not be incorporated.

user.country = "india"; //this is also allowed.
user.greeting = function () {
  console.log(`good morning ${this.name}`); //not work arrow fuction.
};
console.log(user.greeting());

let obj1 = { 1: "a", 2: "b" };
let obj2 = { 3: "a", 4: "b" };
let obj3 = { 5: "a", 6: "b" };
let obj4 = { ...obj1, ...obj2 };
console.log(obj4); //merging an object using spread operator.
let obj5 = Object.assign({}, obj4, obj3);
console.log(obj5); //merging an object using asign method.
console.log(Object.keys(user));
console.log(Object.values(user));
console.log(Object.entries(user));

let { name: myname, gender: sex } = user; //object de-structuring.
console.log(myname, sex);
let array = ["divyang", "mundotia", "mca", "vips", ["iitm", "2020-2023"]];
let [fname, lname, course, pg, ug] = array; //array de-structring
console.log(fname, lname, course, pg, ug);
