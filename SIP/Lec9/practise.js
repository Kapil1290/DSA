// // 1ST TASK
// let arr = [
//     {
//         name: "John",
//         marks: [50,90,90]
//     },
//     {
//         name: "Alice",
//         marks: [90,80,90]
//     },
//     {
//         name: "BOb",
//         marks: [80,80,90]
//     },
// ]
// let avg=[];
// for(let i=0; i<arr.length; i++){
//     avg[i] = arr[i].marks.map((mark)=> mark/arr[i].marks.length).reduce((a, b)=>a+b, 0)
//     arr[i].avgMarks = avg[i];
// }
// console.log("Task one done---------\n")
// console.log(avg)

// console.log(arr)


let company = [ 
    { category: "Electronics", amount: 500 }, 
    { category: "Books", amount: 100 }, 
    { category: "Electronics", amount: 300 } 
] 

let total;
for(let i=0; i<company.length; i++){
    total = company.reduce((start, curr)=>{
        return start+curr.amount;
    },0)
}
console.log(total)