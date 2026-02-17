/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var searchRange = function (nums, target) {
    let i = 0;
    let j = nums.length - 1;
    let resI = -1, resJ = -1;
    while (j >= i) {
        if (nums[i] === target) resI = i;
        else i++;
        if (nums[j] === target) resJ = j;
        else j--;
        if (resI != -1 && resJ != -1) break;
    }
    return [resI, resJ];
};


console.log(searchRange([5, 7, 7, 8, 8, 10], 8));
console.log(searchRange([5, 7, 7, 8, 8, 10], 6));
console.log(searchRange([], 6));