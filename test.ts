// import * as readlineSync from "readline-sync";

// // Taking input from the user
// let userInput: string = readlineSync.question("Enter something: ");
// let user: number = parseInt(userInput, 10);

// // Displaying the input
// console.log("You entered:", user);
let num: number[] = [10, 20, 30, 5, 6, 50];
let num2: number[] = [5, 30];

// let x = (i) => {};

let y = num.map((i) => {
  return 2 * i;
});

let f = num.filter((i) => {
  return i != 10;
});
console.log(f);

console.log("value", y);

let n = num.includes(60);
let m = num.findIndex((i) => i === 50);
// let m = num.indexOf(50)
console.log(m);
