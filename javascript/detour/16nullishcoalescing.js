let val = false;

let elem1 = val || 10; //works for 0,false,NaN,undefined,null.
let elem2 = val ?? 10; //only works for null and undefined.

console.table([elem1, elem2]);
