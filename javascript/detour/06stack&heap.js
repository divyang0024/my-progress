let v1="variable 1";
let v2=v1;
//when primitive data types are used it is mantained inside of stack
// in the above example v2 is assigned the value of v1 but in the background v1 copy is made in the stack and given to v2, so that way if v2 changes its value it will not be reflected on v1.
// but it is not totally opposite in the case of non-primitives
let obj1={
    name:"object1",
}
let obj2={
    name:"object2",
}
obj1=obj2;
console.log(obj1.name);
obj1.name="obj1";
console.log(obj2.name);