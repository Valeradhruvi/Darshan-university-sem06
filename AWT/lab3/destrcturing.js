const array = [10, 20, 30, 40, 50];

const [x, y, z, w, r] = array;

console.log(x);
console.log(y);
console.log(z);
console.log(w);
console.log(r);

//with rest operator
console.log("----with rest operator----");
const [a, b, ...rest] = array;

console.log(a);
console.log(b);

console.log(...rest);

//object destructuring
const person = {
  user: "Darshan",
  age: 21,
  city: "Rajkot",
  country: "India",
};

console.log("----object destructuring----");
const { user, age, city, country } = person;
console.log(user);
console.log(age);
console.log(city);
console.log(country);