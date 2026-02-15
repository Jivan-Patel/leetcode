/**
 * @param {string} a
 * @param {string} b
 * @return {string}
 */
var addBinary = function (a, b) {
    let res = "";
    let sum = Number(a) + Number(b);
    while (sum > 0) {
        res = sum % 2 + res;
        sum = Math.floor(sum / 2);
    }
    return res;
};

console.log(addBinary(11, 1));
console.log(addBinary(1010, 1011));