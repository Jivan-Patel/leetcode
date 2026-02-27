/**
 * @param {number} a
 * @param {number} b
 * @return {number}
 */
var commonFactors = function (a, b) {
    let count = 0;
    let min = a < b ? a : b;
    for (let i = min; i >= 0; i--) {
        if (a % i === 0 && b % i === 0) count++;
    }
    return count;
};

console.log(commonFactors(12, 6));
console.log(commonFactors(25, 30));