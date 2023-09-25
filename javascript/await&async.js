let fun1 = async () => {
    await console.log("inside await");
    return false;
};
console.log("hi1");
fun1().then((result) => {
    console.log(`success : ${result}`)
}).catch((error) => {
    console.log(`failure : ${error}`);
});
console.log("hi2");