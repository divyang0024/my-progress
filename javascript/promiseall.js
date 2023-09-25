let p1 = new Promise((resolve, reject) => {
    console.log("p1 has resolved.");
    resolve("success");
});
let p2 = new Promise((resolve, reject) => {
    console.log("p2 has rejetced.");
    reject("failure");
});
let p3 = new Promise((resolve, reject) => {
    console.log("p3 has resolved.");
    resolve("success");
});
//in this example the catch blocked would be invoked as promise p2 has been rejected and since one promise was rejected it would result in invoking catch(),if p2 was resolved then it will result in calling then().
Promise.all([p1, p2, p3]).then((result) => {
    console.log("then invoked!!!!.");
}).catch((error) => {
    console.log("catch invoked!!!!.");
});