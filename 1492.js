/**
 * @param {number} n
 * @param {number} k
 * @return {number}
 */
var kthFactor = function (n, k) {
    let flag = 1;
    if (flag === k) return 1;
    for (let i = 2; i <= n / 2; i++) {
        if (n % i === 0) {
            flag++;
            if (flag === k) return i;
        }
    }
    if (n != 1) flag++;
    if (flag === k) return n;
    return -1;
};

console.log(kthFactor(12, 3));
console.log(kthFactor(7, 2));
console.log(kthFactor(4, 4));
console.log(kthFactor(1, 2));