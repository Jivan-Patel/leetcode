/**
 * @param {number} left
 * @param {number} right
 * @return {number[]}
 */
var selfDividingNumbers = function (left, right) {
    let res = [];    
    for(let i = left; i <= right; i++) {
        let test = i;
        let valid = true;
        while (test > 0) {
            let digit = test % 10;
            if (i % digit != 0) {
                valid = false;
                break;
            }
            test = Math.floor(test / 10);
        }
        if (valid) res.push(i);
    }
    return res;
};


console.log(selfDividingNumbers(1, 22))
console.log(selfDividingNumbers(47, 85));