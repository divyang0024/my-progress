import mongoose from "mongoose";

const connectDB = async (URI) => {
  try {
    await mongoose.connect(URI);
    console.log("server is connected to mongo!!!!.");
  } catch (err) {
    console.log(err);
  }
};

export { connectDB };
