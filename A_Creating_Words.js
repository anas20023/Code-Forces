const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let inputLines = [];
let currentLine = 0;

rl.on("line", (input) => {
  inputLines.push(input);
});

rl.on("close", () => {
  let tc = parseInt(inputLines[currentLine++]); 
  for (let i = 0; i < tc; i++) {
    let a = inputLines[currentLine++];
    let b = inputLines[currentLine++];
    if (a.length > 0 && b.length > 0) {
      let swappedA = b[0] + a.slice(1);
      let swappedB = a[0] + b.slice(1);

      console.log(swappedA + " " + swappedB);
    } else {
      console.log(a + " " + b); 
    }
  }
});
