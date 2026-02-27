// method - 1

/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function (nums) {

    let sum = nums.reduce((count, num) => count + num,0);
    let nsum = (nums.length) * (nums.length + 1) / 2;

    return nsum - sum;
};

console.log(missingNumber([1, 0, 3, 5, 4]));
console.log(missingNumber([1, 2, 3]));