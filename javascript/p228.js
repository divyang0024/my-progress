import * as p328 from "./p328.js"
let count_students = parseInt(prompt("enter the number of students you want : "));
for (let i = 0; i < count_students; i++) {
    let name = prompt("enter name : ");
    let rollno = parseInt(prompt("enter rollno : "));
    let section = prompt("enter section : ");
    p328.default(name, rollno, section);
}