const express = require('express');
const todo = require('../model/todo.js')
const route = express.Router();

router.get('/', async(req, res)=>{
    const data = await todo.find();
    res.json(data);
})

router.post('/', async(req, res)=>{
    await todo.create({
        title:req.body
    })
    res.json(todo);
})

router.put('/:id', async(req, res)=>{
    const data = await todo.findByIdAndUpdate(
        req.params.id,
        req.body,
        {new: true}
    )
    res.json(data)
})

router.delete("/:id", async(req, res)=>{
    
})