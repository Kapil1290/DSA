// class Student{
    
//     constructor(name, age){
//         this.name = name;
//         this.age = age;
//     }

//     study(){
//         console.log(`${this.name} is Studying JS`)
//     }
// }

// let s1 = new Student("kapil", 23);

// console.log(s1)
// s1.study()

// // SINGLE INHERITANCE
// class Animal{
//     constructor(name){
//         this.name = name;
//     }
//     eat(){
//         console.log(`${this.name} is Eating`);
//     }
//     sleep(){
//         console.log(`${this.name} is Sleeping`);
//     }
// }

// let wild = new Animal("Timu");
// wild.eat()


// class Dog extends Animal{
//     constructor(name, age){
//         super(name)
//         this.age = age;
//     }

//     bark(){
//         console.log(`${this.name} is barking`)
//     }
//     // eat(){
//     //     console.log(`${this.name} is eating with overriding`)
//     // }
// }

// let c = new Dog("labra", 45)
// console.log(c)
// c.eat()


// // MULTI-LEVEL INHERITANCE
// class Cat extends Animal{
//     constructor(name){
//         super(name)
//     }
// }

// let cat = new Cat("pilla");
// cat.eat()


// class canFly{
//     fly(){
//         return "flying"
//     }
// }

// class canWalk{
//     walk(){
//         return "walking"
//     }
// }

// class duck{

// }



// Object.assign(duck.prototype, canFly.prototype, canWalk.prototype)
// let d = new duck()
// console.log(d.walk())


// class canFly {
//     fly() {
//         return "flying";
//     }
// }

// class canWalk {
//     walk() {
//         return "walking";
//     }
// }

// class duck {
//     // Empty class blueprint
// }

// // 1. First, modify the blueprint wrapper
// Object.assign(duck.prototype, canFly.prototype, canWalk.prototype);

// // 2. Second, create the actual instance from the modified blueprint
// let d = new duck();

// // 3. Now invoke your method safely
// console.log(d.walk()); // Output: "walking"



class bike{
    model(){
        console.log("2022");
    }
    name(){
        console.log("Shine  125");
    }
    

}

const b = new bike();
{
  b.model();
  b.name();
}




class car{
    engine(){
        console.log("  v3 engine");
    }
    brand(){  
        console.log(" mercides ");
    }

}

class m4 extends car{
    model(){
        console.log(" 2026 premium model");
    }
    
}
const Car = new m4();
{
  Car.engine();
  Car.brand();
  Car.model();
}




class vehical{
    start()
     {
    console.log("vehical started");
     }
    types()
    {
        console.log("Bike ,Car");
    }
}

class Car extends vehical{
     drive()
     {
        console.log("drive the car");
     }
}


 class sportscar extends vehical
 {
     drive()
     {   
        console.log("Drive the Sports car ");
     }
  }
 
const sport = new sportscar();

    sport.start();
    sport.drive();

const car = new Car();

    car.start();
    car.drive();




class vehical{
    start()
     {
    console.log("vehical started");
     }
    types()
    {
        console.log("Bike ,Car ,Truck ");
    }
}

class Car extends vehical{
     drive(){
        console.log("drive the car");
     }
}


 class sportscar extends Car{
     tubomode(){   
        console.log("Turbo mode on  ");
     }
  }
 
const sport = new sportscar();{
    sport.start();
    sport.drive();
    sport.tubomode();
} 




 class vehical{
    start()
     {
    console.log("vehical started");
     }
    types()
    {
        console.log("Bike ,Car ,Truck ");
    }
}

class bike extends vehical{
    model(){
        console.log("latest model of ATHER");
    }
    mft(){
        console.log("2026");
    }
}

class Car extends vehical{
     drive()
     {
        console.log("drive the car");
     }
}


 class sportscar extends Car
 {
     tubomode()
     {   
        console.log("Turbo mode on  ");
     }
  }

  const B =new bike();
  {
    B.start();
    B.mft();
    B.model();
  }
 
const sport = new sportscar();
{
    sport.start();
    sport.drive();
    sport.tubomode();
}