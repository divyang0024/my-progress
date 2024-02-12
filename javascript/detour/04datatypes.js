// types of data types:
// 1)primitives:
// String,Number,Boolean,null,undefined,symbol,Bigint
// 
// 2)refernece(primitives):
// Array,Objects,Functions
// 
// javascript is dynamically typed since we dont need to specify the type of variable while intializing it.

const id=Symbol('123');
const anotherId=Symbol('123');
const result=(id===anotherId);
let num=1234567890900657n;//Bigint
let fun=()=>{

}
console.log(typeof fun);//returns function
console.table([id,anotherId,result,num]);

// all the primiptive data types are  mantained inside of stack.
// all the non-primptive daat types are mantained indide of heap.