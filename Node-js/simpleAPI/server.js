const http = require("http");
const data = require("./objdata");
http.createServer((req, res) => {
    res.writeHead(200, { 'content-type': 'application\json' });
    res.write(JSON.stringify(data));
    res.write(data.arr[0].name);
    res.end();
}).listen(3000);