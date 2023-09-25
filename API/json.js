// a json can be made out of js objects.
let obj = {
    name: 'divayng',
    gender: 'male',
    education: [
        {
            school: 'ramjas public school day boarding'
        },
        {
            college: 'iitm,iimt'
        }
    ]
}
console.log(obj.education[0].school);
console.log(obj.education[1].college);
let jsonData = JSON.stringify(obj);
console.log(jsonData);
console.log(typeof (jsonData));
// if you want to convert json to js obj
jsonData = JSON.parse(jsonData);
console.log(jsonData);
console.log(typeof (jsonData));