// const promise = new Promise((resolve, reject)=>{
//     let success = false;

//         if(success){
//         resolve("task completed");
//     }else{
//         reject("not fullfilled");
//     }


// });
// promise.then(result=>{
//     console.log(result)
// })
// .catch(err=>{
// console.log("password mistake")
// })

function hello(call){
    call()
    setTimeout(() => {
        console.log("Downloading...")
    }, 3000);

    setTimeout(() => {
        console.log("Downloading...")
    }, 2000);
}

function download(){
    console.log("Download Started......")
    // setTimeout(() => {
        
    // }, 3000);
}

hello(download)


function login(callback){
    setTimeout(() => {
        console.log("")
    }, 2000);
}

function getProfile(callback){
    setTimeout(() => {
        
    }, timeout);
}