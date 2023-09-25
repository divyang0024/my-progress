const http = require("http");
var fun1 = (req, res) => {
    res.write("<h1>hello there....</h1>");
    console.log("server is up and running");
    res.end();
}
http.createServer(fun1).listen(3000);