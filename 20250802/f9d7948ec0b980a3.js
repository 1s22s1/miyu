const input = require("fs").readFileSync("/dev/stdin", "utf8").split("\n");

const N = parseInt(input[0]);
const An = input[1].split(" ");

const maxIt = Math.max(...An);

for (let i = 0; i < N; i++) {
    if (An[i] == maxIt) {
        console.log(i);
    }
}
