//immediate invoked function expression.
((PORT) => {
  console.log(`server is up and running at port:${PORT}.`);
})(3000); //semi-colon is a must.
//this function will call iteself with having to call explicitly.
// we can also pass arguments as shown in above example where we are sending port number.
