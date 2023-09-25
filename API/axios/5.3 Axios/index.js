import express from 'express';
import bodyparser from 'body-parser';
import axios from 'axios';
const port = 3000;
const app = express();
app.use(bodyparser.urlencoded({ extended: true }));
app.use(express.static('public'));
app.set('view-engine', "ejs");
app.get('/', async (req, res) => {
  try {
    const response = await axios.get('https://bored-api.appbrewery.com/random');
    let result = response.data;
    console.log(result);
    res.render('index.ejs', { data: result });
  }
  catch (error) {
    console.error("Failed to make request : ", error.message);
    res.render("solution.ejs", {
      error: error.message,
    });
  }
});

app.post('/', async (req, res) => {
  try {
    const type = req.body.type;
    const participants = req.body.participants;
    let response = await axios.get(`https://bored-api.appbrewery.com/filter?type=${type}&participants=${participants}`);
    let result = response.data;
    // console.log(result[Math.floor(Math.random() * result.length)].activity);
    res.render('index.ejs', { data: result[Math.floor(Math.random() * result.length)] });
  }
  catch (error) {
    console.log(`Failed to make request : ${error.message}`);
    res.render('index.ejs', { error: error.message });
  }
});
app.listen(port, (req, res) => {
  console.log(`server is up and running on port ${port}.`);
});
// 99127227-c58a-40f9-9c56-d9fe96fcc497
// basic authentication requires use of username and password to authenticate a user and it make use of base64 encryption.
// authorization key is given to authorize a user to acces api
// token authentication