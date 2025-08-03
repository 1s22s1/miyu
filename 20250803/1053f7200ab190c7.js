const input = require("fs").readFileSync("/dev/stdin", "utf8").split("\n");

const [N, M] = input[0].split(" ").map(e => parseInt(e));

let arr = [];

for (let i = 1; i < N + 1; i++) {
    const [A, B] = input[i].split(" ").map(e => parseInt(e));
    arr.push([A, B]);
}

console.log(arr.filter(e => e[1] <= M).sort((a, b) => b[0] - a[0])[0][0]);
