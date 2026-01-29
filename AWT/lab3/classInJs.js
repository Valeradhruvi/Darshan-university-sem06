class person{
    constructor(name , age){
        this.name = name;
        this.age = age;
    }

    printDetails() {
        console.log(`Name: ${this.name} Age: ${this.age}`);
    }
}

const p1 = new person("user", 21);
p1.printDetails();