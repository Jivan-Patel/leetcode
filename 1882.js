/**
 * @param {number[]} nums
 * @return {number}
 */
var arraySign = function(nums) {
    let isNegative = false;
    for(let num of nums) {
        if(num < 0) isNegative = !isNegative;
        if(num === 0) return 0;
    }
    return (isNegative) ? -1 : 1;
};

console.log(arraySign([-1,-2,-3,-4,3,2,1]))