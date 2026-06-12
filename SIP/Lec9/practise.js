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


// let company = [ 
//     { category: "Electronics", amount: 500 }, 
//     { category: "Books", amount: 100 }, 
//     { category: "Electronics", amount: 300 } 
// ] 

// let total;
// for(let i=0; i<company.length; i++){
//     total = company.reduce((start, curr)=>{
//         return start+curr.amount;
//     },0)
// }
// console.log(total)



// let sentance = "The fox is quick. The fox is smart." 

// console.log(sentance.toUpperCase());
// let count=0;
// for(let i=0; i<sentance.length-2; i++){
//     if(sentance[i]=='f' && sentance[i+1]=='o' && sentance[i+2]=='x'){
//         count++;
//     }
// }
// console.log(count)



// let list = [ 
//     { name: "A", salary: 50000 }, 
//     { name: "B", salary: 40000 }, 
//     { name: "C", salary: 60000 }
// ] 

// let arr = [];
// for(let a of list){
//     arr.push(a.salary);
// }

// console.log(arr)
// let total;
// for(let i=0; i<list.length; i++){
//     total = list.reduce((a, b)=>{
//         return a+b.salary;
//     },0)
// }
// console.log(total)


// let data1 = [
//     { name: "Laptop", stock: 5 }, 
//     { name: "Phone", stock: 0 }, 
//     { name: "Tablet", stock: 10 } 
// ]

// let arr1 = [];
// for(let i=0; i<data1.length; i++){
//     arr1 = data1.filter((data)=>data.stock!=0)
// }
// console.log(arr1)


// let data2 = [ 
//     { postId: 1, likes: 100 }, 
//     { postId: 2, likes: 200 } 
// ] 

// let totalLikes;
// for(let i of data2){
//     totalLikes = data2.reduce((initial, curr)=>{
//         return initial+curr.likes;
//     },0)
// }

// console.log(totalLikes)


let data3 = [ 
    { title: "Movie A", rating: 8.5 }, 
{ title: "Movie B", rating: 6.0 },
{ title: "Movie c", rating: 9.0 }
] 
 
let arr3=[];
for(let i of data3){
    arr3 = data3.filter((data)=> {
        return data.rating > 8
    
    })
}
console.log(arr3)


