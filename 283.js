/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
    let t = nums.length;
    let c = 0;
    for(let i = 0; c < t; i++) {
        c++;
        if(nums[i] === 0) {
            nums.splice(i,1);
            i--;
            nums.push(0)
        }
    }
    return nums;
};