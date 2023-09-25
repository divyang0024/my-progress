import { Product } from "../models/products.js";

const getAllProducts = async (req, res) => {
    //req.query is used for processing,sorting,filtering api data with the help of key value pair.
    const { company, name, featured, sort } = req.query;//this is object destructuring.

    const queryObject = {};

    if (company) {
        queryObject.company = { $regex: company, $options: "i" };
        // reqex provides string search solution.
    }

    if (featured) {
        queryObject.featured = { $regex: featured, $options: "i" };
    }

    if (name) {
        queryObject.name = { $regex: name, $options: "i" };
    }
    let apiData = Product.find(queryObject);

    if (sort) {
        let sortFix = sort.replace(",", " ");
        queryObject.sort = { $regex: sort, $options: "i" }
        //when we will pass more in url query then it has to be seperated by comma but if we pass that url query string in sort it will not process the parameter as it requires space instead of comma.
    }

    const myData = await apiData.sort(sort);
    // sort("-field")desc
    // sort("field")asc

    res.status(200).json(myData);
};
const getAllProductsTesting = async (req, res) => {
    //req.query is used for processing,sorting,filtering api data with the help of key value pair.
    const { company, name, featured, sort } = req.query;//this is object destructuring.

    const queryObject = {};

    if (company) {
        queryObject.company = { $regex: company, $options: "i" };
        // reqex provides string search solution.
    }

    if (featured) {
        queryObject.featured = { $regex: featured, $options: "i" };
    }

    if (name) {
        queryObject.name = { $regex: name, $options: "i" };
    }

    let apiData = Product.find(queryObject);

    if (sort) {
        let sortFix = sort.replace(",", " ");
        queryObject.sort = sortFix
    }

    const myData = await apiData.sort(sort);

    res.status(200).json(myData);
};

export { getAllProducts, getAllProductsTesting };