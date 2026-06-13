
let arr = [
    {
        name: "John",
        marks: [50,90,90]
    },
    {
        name: "Alice",
        marks: [90,80,90]
    },
    {
        name: "BOb",
        marks: [80,80,90]
    },
]
let avg=[];
for(let i=0; i<arr.length; i++){
    avg[i] = arr[i].marks.map((mark)=> mark/arr[i].marks.length).reduce((a, b)=>a+b, 0)
    arr[i].avgMarks = avg[i];
}
console.log(avg)
console.log(arr)
console.log("--------------------\n")

let company = [ 
    { category: "Electronics", amount: 500 }, 
    { category: "Books", amount: 100 }, 
    { category: "Electronics", amount: 300 } 
] 

let total1;
for(let i=0; i<company.length; i++){
    total1 = company.reduce((start, curr)=>{
        return start+curr.amount;
    },0)
}
console.log(total1)
console.log("--------------------\n")


let sentance = "The fox is quick. The fox is smart." 

console.log(sentance.toUpperCase());
let count=0;
for(let i=0; i<sentance.length-2; i++){
    if(sentance[i]=='f' && sentance[i+1]=='o' && sentance[i+2]=='x'){
        count++;
    }
}
console.log(count)
console.log("----------------\n")


let list = [ 
    { name: "A", salary: 50000 }, 
    { name: "B", salary: 40000 }, 
    { name: "C", salary: 60000 }
] 

let arrx = [];
for(let a of list){
    arrx.push(a.salary);
}

console.log(arrx)
let total;
for(let i=0; i<list.length; i++){
    total = list.reduce((a, b)=>{
        return a+b.salary;
    },0)
}
console.log(total)
console.log("--------------------\n")

let data1 = [
    { name: "Laptop", stock: 5 }, 
    { name: "Phone", stock: 0 }, 
    { name: "Tablet", stock: 10 } 
]

let arr1 = [];
for(let i=0; i<data1.length; i++){
    arr1 = data1.filter((data)=>data.stock!=0)
}
console.log(arr1)
console.log("--------------------\n")

let data2 = [ 
    { postId: 1, likes: 100 }, 
    { postId: 2, likes: 200 } 
] 

let totalLikes;
for(let i of data2){
    totalLikes = data2.reduce((initial, curr)=>{
        return initial+curr.likes;
    },0)
}
console.log(totalLikes)
console.log("--------------------\n")

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
console.log("--------------------\n")



let listx = [ 
    { name: "B", amount: 40000 }, 
    { name: "A", amount: 50000 }, 
    { name: "C", amount: 60000 }
] 

let totax;
for(let a of listx){
    total1 = listx.reduce((start, curr)=>{
        return start+curr.amount;
    },0)
}

console.log(totalx)
console.log("--------------------\n")

let transactions = [
    { type: "credit", amount: 1000 }, 
{ type: "debit", amount: 300 }, 
{ type: "credit", amount: 500 } 
]
let arr4=[];
for(let a of transactions){
    arr4 = transactions.filter((history)=>{
        if(history.type!='debit'){
            return history;
        }
    })
}

console.log(arr4)
console.log("--------------------\n")


let data4 = [
{ user: "A", action: "login" }, 
{ user: "B", action: "logout" }, 
{ user: "C", action: "login" } 
]
let counts=0;
for(let a of data4){
    if(a.action=='login'){
        counts++;
    }
}
console.log(counts)
console.log("--------------------\n")

let git = [
    { repo: "A", stars: 100 }, 
{ repo: "B", stars: 200 }
]
let totalm;
for(let a of git){
    totalm = git.reduce((start, curr)=>{
        return start+curr.stars;
    },0)
}
console.log(totalm)
console.log("--------------------\n")

let data5 = [
    { name: "Laptop", price: 50000 }, 
{ name: "Phone", price: 20000 }, 
{ name: "Tablet", price: 15000 } 
]
let arr5=[];
for(let a of data5){
    arr5 = data5.map((set)=>set.price)
}
console.log(arr5)
console.log("--------------------\n")

let data6 = [
    { name: "Laptop", price: 50000 }, 
{ name: "Phone", price: 20000 }, 
{ name: "Tablet", price: 15000 } 
]

let high=0;
for(let a of data6){
    if(a.price>high){
        high=a.price;
    }
}
console.log(high)
console.log("--------------------\n")

let number = [1,2,3,4,5,6];
let temp=[];
for(let a of number){
    temp = number.filter((num)=>num%2==0)
}
console.log(temp)
let temp2 = []
for(let a of number){
    temp2.push(a*a)
}
console.log(temp2)
console.log("--------------------\n")

let markss = [45, 80, 61, 90, 30];
let arr6=[];
for(let a of markss){
    arr6 = markss.filter((nums)=>nums>50)
} 
console.log(arr6)
let arrr = [];
for(let a of markss){
    arrr = markss.map((nums)=>nums/markss.length).reduce((start, curr)=>{
        return start+curr
    })
} 

console.log(arrr)
console.log("--------------------\n")



let names = ["john", "emma", "alex"];
let updated=[]
for(let a of names){
    updated = names.map((naam)=>naam.toUpperCase())
}
console.log(updated)
console.log("--------------------\n")

let nums = [12,33,7,8];
let countofnum=0;
for(let a of nums){
    countofnum = nums.reduce((start, curr)=>{
        return start+curr;
    })
}
console.log(countofnum)
console.log("--------------------\n")


let vote = [
    { name: "John", age: 25 }, 
{ name: "Emma", age: 16 }, 
{ name: "Alex", age: 20 } 
]
let votes=[]

    votes= vote.filter((vote)=>{
        if(vote.age>=18){
            return {
                vote
            }
        }
    })
console.log(votes)
console.log("--------------------\n")


let prices = [
    { name: "Laptop", price: 50000 }, 
{ name: "Phone", price: 20000 } 
]
let updated_price = []

    updated_price = prices.map((price)=>{
        return price.price - (10/100)*price.price;
    })

console.log(updated_price)
console.log("--------------------\n")


let std = [
    { name: "John", marks: 80 }, 
{ name: "Emma", marks: 40 }, 
{ name: "Alex", marks: 70 } 
]

let std1 = []
    std1 = std.filter((stds)=>{
        if(stds.marks>50){
            return stds
        }
    })
console.log(std1)
std2 = []
 std2 = std.filter(stds => stds.marks>=50).map(stds => stds.name)
console.log(std2)


