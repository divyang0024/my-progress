const https = require("http");

const server = https.createServer((req, res) => {
  if (req.url == "/") {
    res.write("this is home page");
    res.end("this is home page");
  }
  if (req.url == "/about") {
    res.write("this is about page");
    res.end("this is about page");
  }
  res.end("oops");
});

server.listen(3000, () => {
  console.log("server is up and running at port 3000.");
});
