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

// function hello(call){
//     call()
//     setTimeout(() => {
//         console.log("Downloading...")
//     }, 3000);

//     setTimeout(() => {
//         console.log("Downloading...")
//     }, 2000);
// }

// function download(){
//     console.log("Download Started......")
//     // setTimeout(() => {
        
//     // }, 3000);
// }

// hello(download)


// function login(callback){
//     setTimeout(() => {
//         console.log("User authentication")
//     }, 2000);
//     callback()
// }

// function getProfile(callback){
//     setTimeout(() => {
//         console.log("USER PROFILE FETCHED...")
//     }, 1000);
//     callback()
// }

// login(()=>{
//     getProfile(()=>{
//         setTimeout(() => {
//             console.log("Profile Displaying....")
//         }, 3000);
//     })
// })


// function orderPlace(call){
//     setTimeout(() => {
//         console.log("Order Placed...")
//     }, 1000);
//     call();
// }

// function prepareFood(call){
//     setTimeout(() => {
//         console.log("Food is prepared...")
//     }, 2000);
//     call();
// }

// function foodDelivered(){
//     setTimeout(() => {
//         console.log("food delivered...")
//     }, 3000);
 
// }

// orderPlace(()=>{
//     prepareFood(()=>{
//         foodDelivered()
        
//     })
// })



// function startDownload(call){
//     setTimeout(() => {
//         console.log("Start Downloading...")
//     }, 1000);
//     call();
// }

// function complete(call){
//     setTimeout(() => {
//         console.log("Completed...")
//     }, 2000);
   
//     call();
    
// }

// function compressingFile(call){
//     setTimeout(() => {
//         console.log("Compresing File...")
//     }, 2000);
//     call()
// }

// function compressionComplete(call){
//     setTimeout(() => {
//         console.log("completed...")
//     }, 3000);
//     call();
// }

// function uploadFile(call){
//     setTimeout(() => {
//         console.log("Uploading file...")
//     }, 3000);
//     call();
// }

// function uploadComplete(){
//     setTimeout(() => {
//         console.log("completed...")
//     }, 4000);
 
// }

// startDownload(()=>{
    
//     complete(()=>{
//         compressingFile(()=>{
//             compressionComplete(()=>{
//                 uploadFile(()=>{
//                     uploadComplete()
//                 })
//             })
//         })
//     })
// })

// function downloadFile(name){
//     return new Promise((res)=>{
//         console.log("downloading " + name + " Started")
//         setTimeout(() => {
//         console.log("download completed")
//     }, 2000);
//     res()
//     })
// }

// downloadFile("Kapil")
// .then(res=>{
//     console.log("Task Done")
    
// })


function oddEven(val){
    return(new Promise((res)=>{
        if(val%2==0)
            console.log("Even")
        else
            console.log("Odd")
    }))
}

oddEven(34)
// .then((res)=>{
//     console.log
// })