const {sequilize} = require('../config/db.js')
const {DataTypes} = require('sequilize');
const student = sequilize.define("student",{
id:{
    type: DataTypes.INTEGER,
    autoIncrement: true,
    primaryKey: true
},
name:{
    type: DataTypes.STRING,
    allowNull: false
}, 
{


}
});