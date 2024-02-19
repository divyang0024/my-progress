let score= new Number(100000.4545);
console.log(typeof score);
console.log(score.toString());//converts number into string.
console.log(score.toFixed(2));//resrticts floating point value and returns a string.
console.log(score.toPrecision(4));//round of the value with specified precision.
console.log(score.toLocaleString("en-IN"));//put comma a.t different number system by default it follows U.S number system.
console.log(Math.abs(-450));//returns positive value.
console.log(Math.round(4.5));//returns ceiling value if value >=.5 otherwise returns floorinf value.
console.log(Math.ceil(4.2));//returns ceiling value.
console.log(Math.floor(4.6));//returns flooring value.
console.log(Math.sqrt(49));//returns flooring value.
console.log(Math.min(12,23,34,45,56));//returns lowest value.
console.log(Math.max(12,23,34,45,56));//returns greatest value.
console.log(Math.floor(Math.random()*(50-25+1)+25));