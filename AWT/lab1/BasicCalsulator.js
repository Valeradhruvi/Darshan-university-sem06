function basicCalculator(num1, num2, operator) {
    let result;
    switch(operator) {
        case '+': 
            result = num1 + num2;
            break;
        case '-': 
            result = num1 - num2;
            break;
        case '*': 
            result = num1 * num2;
            break;
        case '/': 
            if (num2 === 0) {
                return "Error: Division by zero is not allowed.";
            }
            result = num1 / num2;
            break;
        default:
            return "Error: Invalid operator. Please use +, -, *, or /.";
    }

    return result;
}

console.log(basicCalculator(10, 5, '+'));