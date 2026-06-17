
// let detail = {
//     name: "kapil",
//     age: 21,
//     contact: 232324,
//     city: "indore",
//     address:{
//         place: "Neww York city", 
//         pin: 452022
//     }
// }

// // delete detail.name;
// console.log(detail)

// // loop on object 
// for( key in detail){
//     console.log(key, detail[key]) //
// }

// // let arr = [a={name:"kapil"}]

// function hello(name="kapil"){
//     console.log(`Hello ${name}`)
// }

// hello()

// let [a1, b1] = [12,22];
// console.log(a1)

// let {name, age} = detail;
// console.log(name)

// //spread 
// let arr1 = [2,3,3,3];
// let arr2 = [...arr1]
// console.log(arr2)

// let name1 = "kapil";
// let std = {
//     name1
// }
// console.log(std)

// let a={a:1}
// let b = {b:2}

// let merge = {...a, ...b};
// console.log(merge)

// console.log(Object.keys(detail))
// console.log(Object.values(detail))
// console.log(Object.entries(detail))
// console.log(Object.assign({},detail))// to copy detail in other object

// console.log("name" in detail)

// freeze the obj. don't update anything


// seal, we can update but not add and delete from obj
Object.seal()

// deep copy means both reference are different
// but in shallow copy both references are same 
// both work with nested objects


let arr = ["gagan", "amit", "kapil"]

for(let i=0; i<arr.length; i++){
    arr[i] = arr[i].toUpperCase();
}

console.log(arr)

let product = [
    {id:1, name:"laptop"},
    {id:1, name:"mouse"}
]

let arr1 = product.map((product)=>product.name);
console.log(arr1)

let word = ["apple", "banana", "cat", "grapes"]
let w = word.filter((w)=>w.length>5);
console.log(w)


let people = [
    {name:"A", age:23},
    {name:"B", age:12}
]
let p = people.filter((a)=>a.age>=18);
console.log(p)

// let x = word.map((val)=>val.length)
// let x = word.reduce((start, curr)=>start+=curr.length, 0);
// console.log(x)

let arr2 = [1,2,3,4,5,6,7,8];

let x1 = arr2.filter((f)=>f%2==0).map((x)=>x*x)
console.log(x1)

let salary = [
    {name:"A", sal:12000},
    {name:"B", sal:12000}
]

let x3 = salary.reduce((start, curr)=>start+=curr.sal, 0)
console.log(x3)

let std = [
    {name:"A", mark:35},
    {name:"B", mark:45}, 
    {name:"C", mark:58}
]

let st = std.filter((s)=>s.mark>40).map((a)=>a.name)

console.log(st)

let x5 = arr2.reduce((start, curr)=>start+=curr, 0);
console.log(x5/arr2.length)