let str1="Divyang";
let str2="Mundotia";

console.log(`${str1} ${str2}`);//string interpolation

let str3=new String('this is string 3.');
console.log(str3);//this returns a string object along with the values inside of it in the form of key value pair.
// [0]:t
// [1]:h
// string also have various function built into it which we can use to utilize.
// console.log(str[0])it will work for both dynamic and non-dynamically intialized string.
console.log(str1.length);//this is a sole function in string that does not comes inside of proto object rest of the string functions lies inside of proto object.
console.log(str1.toUpperCase());//converts the string into upper case.
console.log(str1.toLowerCase());//converts the string into lower case.
console.log(str1.charAt(5));//returns the character at specified index.
console.log(str1.indexOf('y'));//returns the index of character starting from left (only first occurance).
console.log(str1.substring(1,4));//The substring() method of String values returns the part of this string from the start index up to and excluding the end index, or to the end of the string if no end index is supplied.
console.log(str1.slice(1,4));//The slice() method of String values returns the part of this string from the start index up to and excluding the end index, or to the end of the string if no end index is supplied,the key differnce in slice and substring is that anything below 0 will be treated as 0 in substring.
console.log(str1.slice(-3,7));
let str4 = "        DM        ";
console.log(str4.trim());//it removes start and end spaces.
console.log(str4.trimEnd());//it removes end spaces.
console.log(str4.trimStart());//it removes start spaces.
let myName="Divyang .Mundotia";
console.log(myName.replace(" .","-"));//(destination str,replacement str).
console.log(myName.includes("Div"));//returns true or false based on the string passed in the function if present then "true" otherwise "false".
let str5="this is split method";
console.log(str5.split(" "));//it spilits a string into numerous chunks.