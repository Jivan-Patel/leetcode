/**
 * @param {number[]} nums
 * @return {number[]}
 */
var separateDigits = function(nums) {
    let res = nums.join('').split('').map((num) => Number(num));
    return res;
};


console.log(separateDigits([13,25,83,77]));

