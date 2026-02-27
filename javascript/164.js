/**
 * @param {number[]} nums
 * @return {number}
 */
var maximumGap = function (nums) {
    nums.sort((a, b) => a - b);
    let maxDiff = 0;
    for(let i = 0; i < nums.length - 1; i++) {
        if(nums[i + 1] - nums[i] > maxDiff) maxDiff = nums[i + 1] - nums[i]
    }
    return maxDiff;
};

console.log(maximumGap([3, 6, 9, 1]));
console.log(maximumGap([10]));