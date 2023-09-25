import mongoose from "mongoose";
// const uri = "mongodb+srv://divyang0024:dvdvdvdv@cluster0.u9wmtpy.mongodb.net/Cluster0?retryWrites=true&w=majority";

let connectDB = (uri) => {
    return mongoose.connect(uri, {
        useNewUrlParser: true,
        // useUnfiedTopology: true
    });
}
export { connectDB };