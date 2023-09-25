
let response = "true";

function prom(response) {
    return new Promise((resolve, reject) => {
        if (response == "true") {
            console.log("resolved!!!!.");
            resolve("success");
        } else {
            console.log("rejected!!!!.");
            reject("failure");
        }
    })
};

let onresolve = (result) => {
    console.log("inside then function");
    console.log(result);
};
let onreject = (error) => {
    console.log("inside catch function");
    console.log(error);
};
// prom.then(onresolve);
// prom.catch(onreject);

prom("true").then(onresolve);
prom("false").then(onreject);
