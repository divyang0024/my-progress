import mongoose from "mongoose";
// const uri = process.env.MONGO_URI;
let connectDB = (uri) => {
    return mongoose.connect(uri, { useNewUrlParser: true });
};
export { connectDB };