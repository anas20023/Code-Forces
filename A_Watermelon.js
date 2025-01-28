const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.on('line', (input) => {
    let x = parseInt(input);
    if (x % 2 == 0 && x > 2) {
        console.log("YES");
    } else {
        console.log("NO");
    }
    rl.close();
});
