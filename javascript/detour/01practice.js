let heading1 = document.getElementById("heading1");

console.log(heading1);

let class1 = document.getElementsByClassName("class1"); //it will return a htmlCollection.
//html collection are not iterable by default.

let class1Converted = Array.from(class1);

console.log(class1Converted);
class1Converted.forEach((element) => {
  element.style.color = "crimson";
});

let headings = document.getElementsByTagName("h1"); //returns a html collection.
console.log(headings);

let Li1 = document.querySelector("ul li"); //only selects one single element.
console.log(Li1.textContent);
let allLi = document.querySelectorAll("ul li"); //it will return a node list.
//node list are iterable.
console.log(allLi);
