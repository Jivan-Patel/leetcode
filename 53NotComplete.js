/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function (nums) {
    let maxSum = nums[0];
    for (let i = 0; i < nums.length; i++) {
        let sum = nums[i];
        if (sum > maxSum) maxSum = sum;
        for (let j = i + 1; j < nums.length; j++) {
            sum += nums[j];
            if (sum > maxSum) maxSum = sum;
        }
    }
    return maxSum;
};

console.log(maxSubArray([-2, 1, -3, 4, -1, 2, 1, -5, 4]))
console.log(maxSubArray([1]))
console.log(maxSubArray([5, 4, -1, 7, 8]))