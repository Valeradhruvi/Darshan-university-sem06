if (true) {

    var x = 100; //it has functional scope
    let y = 200; //can be accessed within the block , block scope

    console.log(x); // 100
    console.log(y); // 200
}

console.log(x); 
// console.log(y);  causes error

