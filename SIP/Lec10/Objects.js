
let detail = {
    name: "kapil",
    age: 21,
    contact: 232324,
    city: "indore",
    address:{
        place: "Neww York city", 
        pin: 452022
    }
}

// delete detail.name;
console.log(detail)

// loop on object 
for( key in detail){
    console.log(key, detail[key]) //
}

// let arr = [a={name:"kapil"}]

function hello(name="kapil"){
    console.log(`Hello ${name}`)
}

hello()

let [a1, b1] = [12,22];
console.log(a1)

let {name, age} = detail;
console.log(name)

//spread 
let arr1 = [2,3,3,3];
let arr2 = [...arr1]
console.log(arr2)

let name1 = "kapil";
let std = {
    name1
}
console.log(std)

let a={a:1}
let b = {b:2}

let merge = {...a, ...b};
console.log(merge)

console.log(Object.keys(detail))
console.log(Object.values(detail))
console.log(Object.entries(detail))
console.log(Object.assign({},detail))// to copy detail in other object

console.log("name" in detail)

// freeze the obj. don't update anything


// seal, we can update but not add and delete from obj
Object.seal()

// deep copy means both reference are different
// but in shallow copy both references are same 
// both work with nested objects