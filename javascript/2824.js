// Method-1

/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var countPairs = function (nums, target) {
    let res = 0;
    let n = nums.length;
    for (let i = 0; i < n; i++) {
        for (let j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] < target) res++;
        }
    }
    return res;
};

console.log(countPairs([-1, 1, 2, 3, 1], 2))
console.log(countPairs([-6, 2, 5, -2, -7, -1, 3], -2))