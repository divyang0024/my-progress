// a json can be made out of js objects.
let obj = {
    name: 'divayng',
    gender: 'male'
}
const jsonData = JSON.stringify(obj);
console.log(jsonData);
// if you want to convert json to js obj
jsonData = JSON.parse(jsonData);