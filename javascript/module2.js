import { person } from './module3.js';
export default function () {
    console.log("inside default function!!!!");
    return GET_data();
}
function GET_data() {
    return person;
}
