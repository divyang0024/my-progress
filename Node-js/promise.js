let a = 50;
let b;

let myPromise = new Promise((resolve, reject) => {
    setTimeout(() => resolve(50), 2000);
});
myPromise.then((d) => {
    b = d;
    console.log(a + b);
});