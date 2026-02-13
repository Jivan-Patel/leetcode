/**
 * @param {string} num1
 * @param {string} num2
 * @return {string}
 */
var addStrings = function(num1, num2) {
    let a = Number((num1.length > 5) ? num1.slice(-6) : num1);
    let b = Number(num2);
    let res = (num1.length > 5) ? a.slice(0,-6) + (a + b) : String(a+b);
    return res;
};


console.log(addStrings(5555555555559,5))