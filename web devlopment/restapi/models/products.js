import mongoose from "mongoose";

const productSchema = new mongoose.Schema({
    name: {
        type: String,
        required: true,
    },
    price: {
        type: Number,
        required: true,
    },
    featured: {
        type: Boolean,
        default: false
    },
    rating: {
        type: Number,
        default: 4.9
    },
    createdAt: {
        type: Date,
        default: Date.now(),
    },
    company: {
        type: String,
        enum: {
            values: ['Apple', 'Samsung', 'Dell', 'Xiaomi (Mi)'],
            message: `{VALUE} is not supported`//if user try to insert some different company other than value then it will show this error message.
        }
    }
});
const Product = mongoose.model('Product', productSchema);
export { Product }; 