const id=1234;//value cannot be manipulated once declared
let Name="Divyang";
var pswd="************";
let myLocation;//when value is not passed in the js variables it will always show undefined.
console.log(id,Name,pswd);
console.table([id,Name,pswd,myLocation]);//is a alternate for console.log() but it prints the output in a table form having cols like index and values.

// features of let(ECMA 6):
//  1.it has block scope.
//  2.cannot be redeclared.
//  2.cannot be hoisted.

// features of var(ECMA 6):
//  1.it has no block scopes.
//  2.can be redeclared.
//  2.can be hoisted.