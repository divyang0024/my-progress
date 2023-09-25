let getHomePage = (req, res) => {
    res.status(200).send("you are at Home page!!!!.");
};
let getAboutPage = (req, res) => {
    res.status(200).send("you are at About page!!!!.");
};
export{getHomePage,getAboutPage};