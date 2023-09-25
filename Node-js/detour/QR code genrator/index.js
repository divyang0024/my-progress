import filesystem from "fs";
import inquirer from "inquirer";
import qr from "qr-image";

inquirer
    .prompt([
        { message: "type in your URL : ", name: "URL" }
        //the above statement will ask for a prompt in the form of an input to which we have to insert a working relative or absolute url.
        //message property will issue a prompt.
        //name property will store the url and it name will turn into an object.
    ])
    .then((answers) => {
        const url = answers.URL;
        var qr_svg = qr.image(url);
        qr_svg.pipe(filesystem.createWriteStream('./Qr_images/qr_img.png'));
        //URL is an object which consist of your relative or absoulute url.
        // the next line takes the url and it genrates a qr image corresponding to the url.
        // in the next to next line we use file system to take the genrated image and put it into the current or specfied directory with a specified name.
        filesystem.writeFile("./Qr_url/url.txt", url, (err) => {
            if (err) throw err;
            console.log("file has been successfully created.");
        });
    })
    .catch((error) => {
        if (error.isTtyError) {
            // Prompt couldn't be rendered in the current environment
        } else {
            // Something else went wrong
        }
    });