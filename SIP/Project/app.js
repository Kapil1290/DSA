require("dotenv").config()
const express = require('express')
const connect = require('./config/')
const todo = require('./model/todo.js')
const app = express();
connect();
app.use(express.json());
app.use(express.static("public"));
app.get('/todos', todoroutes);
app.listen(process.env.port);