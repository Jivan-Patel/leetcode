/**
 * @param {number} num
 * @return {number}
 */
var maximum69Number  = function(num) {
    const ans = Number(String(num).replace('6', '9'));
    return ans;
};

console.log(maximum69Number(9669))
console.log(maximum69Number(9996))
console.log(maximum69Number(9999))