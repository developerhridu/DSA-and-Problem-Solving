import * as readlineSync from "readline-sync";

// Taking input from the user
let userInput: string = readlineSync.question("Enter something: ");
let user: number = parseInt(userInput, 10);

// Displaying the input
console.log("You entered:", user);
