// Method-1

/**
 * @param {number[]} nums
 * @return {number[]}
 */
var numberGame = function (nums) {
    nums.sort((a, b) => a - b)
    for (let i = 0; i < nums.length; i = i + 2) {
        let temp = nums[i];
        nums[i] = nums[i + 1];
        nums[i + 1] = temp;
    }
    return nums;
};

// Method-2

/**
 * @param {number[]} nums
 * @return {number[]}
 */
var numberGame = function (nums) {
    nums.sort((a, b) => a - b);
    let i = 0; 
    while(nums.length > i) {
        let temp = nums[i];
        nums[i] = nums[i + 1];
        nums[i + 1] = temp;
        i = i + 2
    }
    return nums;
};

console.log(numberGame([5, 4, 2, 3]));
console.log(numberGame([2, 5]));