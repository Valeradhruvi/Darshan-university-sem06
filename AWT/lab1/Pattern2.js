for (let i = 5; i >= 1; i--) {
    let line = "";

    for (let j = 0; j < 5 - i; j++) {
        line += " ";
    }

    for (let num = 5; num >= 5 - (i - 1); num--) {
        if(i % 2 == 0){
            line += "@ ";
        }
        else{
            line += "* ";
        }
    }

    console.log(line);
}
