/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    let set = new Set();
    for (let i = 0; i < nums.length; i++) {
        if (set.has(nums[i])) return true;
        set.add(nums[i]);
    }

    return false;
};

console.log(containsDuplicate([1, 2, 3, 1]));
console.log(containsDuplicate([1, 0, 1, 1]));
console.log(containsDuplicate([1, 2, 3, 1, 2, 3]));
console.log(containsDuplicate([3, 0, 0, 0, 3, 1]));