let fun1 = async () => {
    await console.log("inside await");
    return true;
};
console.log("hi1");
fun1().then((result) => {
    console.log(result)
}).catch((error) => {
    console.log(error);
});
console.log("hi2");