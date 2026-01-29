
for (let i = 1; i <= 5; i++) {
    let line = "";

    for (let j = 0; j < 5 - i; j++) {
        line += " ";
    }

    for (let num = 5; num >= 5 - (i - 1); num--) {
        line += num+" ";
    }

    console.log(line);
}
