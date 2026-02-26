/**
 * @param {number} x
 * @return {number}
 */
var sumOfTheDigitsOfHarshadNumber = function(x) {
    let temp = x;
    let digitSum = 0;
    while(temp > 0) {
        digitSum += temp % 10;
        temp = Math.floor(temp/10);
    }
    return (x % digitSum === 0) ? digitSum : -1;
};


console.log(sumOfTheDigitsOfHarshadNumber(18))
console.log(sumOfTheDigitsOfHarshadNumber(23))