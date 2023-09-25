import mongoose from "mongoose";

let connectDB = (uri) => {
    return mongoose.connect(uri, { useNewUrlParser: true });
};

export { connectDB };