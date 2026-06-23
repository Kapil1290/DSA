class Employee{
    constructor(id, name){
        this.id = id;
        this.name = name;
    }

    work(){
        console.log(`${this.name} is working`)
    }
    showDetails(){
        console.log(`Name-${this.name}, Id-${this.id}`)
    }
}

class Developer extends Employee{
    // constructor(language){
    //     this.language = language;
    // }
    writecode(){
        console.log("Writting code")
    }
}

class FrontendDeveloper extends Developer{
    constructor(name, id, fram){
        super(name, id)
        
        this.fram = fram;
    }
    buildui(){
        console.log("Building UI")
    }
}

class Manager extends Employee{
    constructor(name, id, teamsize){
        super(name, id)
       
        this.teamsize = teamsize;
    }
    conductmeeting(){
        console.log("Meeting is conducting")
    }
}

let emp = new Employee("A", 101);
let frontdev = new FrontendDeveloper("B", 102, ["js", "react"])
let mg = new Manager("C", 103, 10)

emp.work()
emp.showDetails()


frontdev.work()
frontdev.writecode()
frontdev.buildui()

mg.work()
mg.conductmeeting()