import express from 'express';
import path, { dirname as dn } from 'path';
import { fileURLToPath } from "url";
const _dirname = dn(fileURLToPath(import.meta.url));//in this format it is used to get currunt directory and it have to be used because we are using 'esm' instead of 'cjs' which uses __dirname.
// a middleware deals with things like error handling,data pre-processing,logging and authetication.
// a middleware is executed before the request handlers.