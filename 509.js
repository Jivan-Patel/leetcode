/**
 * @param {number} n
 * @return {number}
 */
var fib = function (n) {
    if(n <= 1) return n;
    let f1 = 0;
    let f2 = 1;
    let current = 1;
    let i = 2;
    while (i < n) {
        f1 = f2;
        f2 = current;
        current = f1 + f2;
        i++;
    }
    return current;
};


console.log(fib(2)); // 1
console.log(fib(3)); // 2
console.log(fib(4)); // 3