/**
 * @param {number[]} nums
 * @return {number}
 */
var maxProduct = function (nums) {
    let max = 0;
    for (let i = 0; i < nums.length; i++) {
        for (let j = i + 1; j < nums.length; j++) {
            max = (nums[i] - 1) * (nums[j] - 1) > max ? (nums[i] - 1) * (nums[j] - 1) : max;
        }
    }
    return max;
};


console.log(maxProduct([3, 4, 5, 2])); // 12