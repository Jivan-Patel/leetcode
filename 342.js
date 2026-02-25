/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfFour = function (n) {
    let flag = 1;
    while (n > flag) {
        flag *= 4;
    }
    return flag === n;
};

console.log(isPowerOfFour(16))
console.log(isPowerOfFour(5))
console.log(isPowerOfFour(1))