import { default as df } from './module2.js';
let temp = df();
console.log(temp);
SET_data();
function SET_data() {
    for (let info in temp) {
        console.log(`your ${info} is ${temp[info]}`);
    }
}