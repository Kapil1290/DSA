const promise = new Promise((resolve, reject)=>{
    let success = false;

        if(success){
        resolve("task completed");
    }else{
        reject("not fullfilled");
    }


});
promise.then(result=>{
    console.log(result)
})
.catch(err=>{
console.log("password mistake")
})