// 1ST TASK
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

let avg = arr[0].marks.map((mark) => mark/arr[0].marks.length).reduce((a,b) => a+b, 0);

let avg1 = arr[1].marks.map((mark) => mark/arr[1].marks.length).reduce((a,b) => a+b, 0);

let avg2 = arr[2].marks.map((mark) => mark/arr[2].marks.length).reduce((a,b) => a+b, 0);

let update = [avg, avg1, avg2];
for(let i = 0; i < update.length; i++){
    console.log(update[i]);
}
for(let i = 0; i < arr.length; i++){
    arr[i].avgMarks = update[i];
}
console.log(arr);



console.log("\n\n\n");


let sentance = "The fox is quick. The fox is smart." 

let lower = sentance.toLowerCase();
console.log(lower);

let fox_count = 0;
for(let i = 0; i < lower.length; i++){
    
    if(lower[i] === "f" && lower[i+1] === "o" && lower[i+2] === "x"){
        fox_count++;
    }
    
}
console.log(fox_count);

console.log("\n\n\n");

const sales = [ 
  { category: "Electronics", amount: 500 }, 
  { category: "Books", amount: 100 }, 
  { category: "Electronics", amount: 300 } 
];

// Calculate the total revenue
const totalRevenue = sales.reduce((accumulator, currentSale) => {
  return accumulator + currentSale.amount;
}, 0);

console.log("Total Revenue:", totalRevenue); // Output: 900


const employees = [ 
  { name: "A", salary: 50000 }, 
  { name: "B", salary: 40000 }, 
  { name: "C", salary: 60000 } 
];



const salaries = employees.map(employee => employee.salary);
console.log("Salaries Array:", salaries); 



const totalSalary = salaries.reduce((accumulator, currentSalary) => {
  return accumulator + currentSalary;
}, 0);
console.log("Total Salary Paid:", totalSalary); 
// Output: 150000



const product = [ 
  { name: "Laptop", stock: 5 }, 
  { name: "Phone", stock: 0 }, 
  { name: "Tablet", stock: 10 } 
];


const availableProductNames = product
  .filter(product => product.stock > 0)
  .map(product => product.name);

console.log(availableProductNames); 





const posts = [ 
  { postId: 1, likes: 100 }, 
  { postId: 2, likes: 200 } 
];

const totalLikes = posts.reduce((accumulator, currentPost) => {
  return accumulator + currentPost.likes;
}, 0);

console.log("Total Likes:", totalLikes); 



const movies = [ 
  { title: "Movie A", rating: 8.5 }, 
  { title: "Movie B", rating: 6.0 } 
];

const highRatedTitles = movies
  .filter(movie => movie.rating > 8)
  .map(movie => movie.title);

console.log(highRatedTitles); 




const spendingRecords = [ 
  { customer: "John", amount: 50000 }, 
  { customer: "Emma", amount: 20000 } 
];

const totalSpending = spendingRecords.reduce((sum, record) => sum + record.amount, 0);

console.log("Total Spending:", totalSpending); 



const transactions = [ 
  { type: "credit", amount: 1000 }, 
  { type: "debit", amount: 300 }, 
  { type: "credit", amount: 500 } 
];

// Filter for 'credit' transactions, then sum their amounts
const totalCredit = transactions
  .filter(tx => tx.type === "credit")
  .reduce((sum, tx) => sum + tx.amount, 0);

console.log("Total Credit Amount:", totalCredit); 
// Output: 1500



const userActions = [ 
  { user: "A", action: "login" }, 
  { user: "B", action: "logout" }, 
  { user: "C", action: "login" } 
];

// Method 1: Using filter and getting the length
const loginCount = userActions.filter(record => record.action === "login").length;

console.log("Login Count:", loginCount); 
// Output: 2




const repos = [ 
  { repo: "A", stars: 100 }, 
  { repo: "B", stars: 200 } 
];

const totalStars = repos.reduce((sum, repo) => sum + repo.stars, 0);

console.log(totalStars); 




const products = [ 
  { name: "Laptop", price: 50000 }, 
  { name: "Phone", price: 20000 }, 
  { name: "Tablet", price: 15000 } 
];

const prices = products.map(p => p.price);
console.log(prices); 

const maxPrice = Math.max(...prices);
console.log(maxPrice); 




const numbers = [1, 2, 3, 4, 5, 6];

const evenSquares = numbers
  .filter(num => num % 2 === 0)
  .map(num => num ** 2);

console.log(evenSquares); 



const marks = [45, 80, 60, 90, 30];

const passingMarks = marks.filter(mark => mark > 50);
const average = passingMarks.reduce((sum, mark) => sum + mark, 0) / passingMarks.length;

console.log(average); 



const cart = [ 
  { item: "Book", price: 200 }, 
  { item: "Pen", price: 20 }, 
  { item: "Bag", price: 500 } 
];
const totalCartValue = cart.reduce((sum, item) => sum + item.price, 0);

console.log(totalCartValue); 



const names = ["john", "emma", "alex"];

const uppercaseNames = names.map(name => name.toUpperCase());
console.log(uppercaseNames); 



const nums = [10, 20, 30, 40];
const sum = nums.reduce((accumulator, current) => accumulator + current, 0);
console.log(sum);



const users = [ 
  { name: "John", age: 25 }, 
  { name: "Emma", age: 16 }, 
  { name: "Alex", age: 20 } 
];

const adultNames = users
  .filter(user => user.age >= 18)
  .map(user => user.name);

console.log(adultNames);




const items = [ 
  { name: "Laptop", price: 50000 }, 
  { name: "Phone", price: 20000 } 
];

const discountedPrices = items.map(item => item.price * 0.9);

console.log(discountedPrices); 





const students = [ 
  { name: "John", marks: 80 }, 
  { name: "Emma", marks: 40 }, 
  { name: "Alex", marks: 70 } 
];

const passingStudents = students
  .filter(student => student.marks >= 50)
  .map(student => student.name);

console.log(passingStudents); 