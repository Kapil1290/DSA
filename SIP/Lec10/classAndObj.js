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