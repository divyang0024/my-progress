// basics of http core module:
// get:get resources.
// post:send resources.
// put:replace resources.
// patch:patch up a resource.
// delete:delete a resource.
import express from "express";
const app = express();
const port = 3000;

app.get('/', (req, res) => {
    res.send("this is home page.");
    // res.send("second send invoked");note that you can send only one request at a time.
});
app.get('/contact', (req, res) => {
    res.send("this is contact page.");
    // res.send("second send invoked");note that you send only one request at a time.
});
app.get('/about', (req, res) => {
    res.send("this is about page.");
    // res.send("second send invoked");note that you send only one request at a time.
});

app.listen(port, () => {
    console.log("my server is up and running on port 3000!!!!.");
});