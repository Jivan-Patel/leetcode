/**
 * @param {number[]} nums
 * @return {number}
 */
var findPeakElement = function(nums) {
    let maxI = 0;
    for(let i = 0; i < nums.length; i++) {
        if(nums[maxI] < nums[i]) maxI = i;
    }
    return maxI;
};

console.log(findPeakElement([1,2,3,1]));
console.log(findPeakElement([1,2,1,3,5,6,4]));