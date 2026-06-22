const promise = new Promise((resolve, reject)=>{
    let success = true;
    if(success){
        resolve("task completed");
    }else{
        reject("not fullfilled");
    }
})