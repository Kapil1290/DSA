class Student{
    
    constructor(name, age){
        this.name = name;
        this.age = age;
    }

    study(){
        console.log(`${this.name} is Studying JS`)
    }
}

let s1 = new Student("kapil", 23);

console.log(s1)
s1.study()

// SINGLE INHERITANCE
class Animal{
    constructor(name){
        this.name = name;
    }
    eat(){
        console.log(`${this.name} is Eating`);
    }
    sleep(){
        console.log(`${this.name} is Sleeping`);
    }
}

let wild = new Animal("Timu");
wild.eat()


//MULTI-LEVEL INHERITANCE
class Dog extends Animal{
    constructor(name, age){
        
        super(name)
        this.age = age;
    }

    bark(){
        console.log(`${this.name} is barking`)
    }
    // eat(){
    //     console.log(`${this.name} is eating with overriding`)
    // }
}

let c = new Dog("labra", 45)
console.log(c)
c.eat()



class Cat extends Dog{
    constructor(name){
        super(name)
    }
}

let cat = new Cat("pilla");
cat.eat()