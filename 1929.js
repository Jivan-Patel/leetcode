// Method - 1

/**
 * @param {number[]} nums
 * @return {number[]}
 */
var getConcatenation = function(nums) {
    let len = nums.length;
    for(let i = 0; i < len; i++) nums.push(nums[i]);
    return nums;
};


// Method - 2

/**
 * @param {number[]} nums
 * @return {number[]}
 */
var getConcatenation = function(nums) {
    return [...nums, ...nums];
};



console.log(getConcatenation([1,2,1]))
console.log(getConcatenation([1,3,2,1]))