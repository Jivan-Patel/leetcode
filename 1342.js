/**
 * @param {number} num
 * @return {number}
 */
var numberOfSteps = function(num) {
    let step = 0;
    while (num > 0) {
        if(num % 2 == 0) num /= 2;
        else num--; 
        step++;
    }
    return step;
};

console.log(numberOfSteps(14))
console.log(numberOfSteps(8))