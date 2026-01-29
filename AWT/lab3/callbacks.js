function Addition(a, b, callback) {
  callback(a + b);
}

function callbackFunction(callback) {
  console.log("Callback function executed");
  console.log("Result of Addition: " + callback); 
}

Addition(5, 10, callbackFunction);
