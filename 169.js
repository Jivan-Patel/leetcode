/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function (nums) {
    let freq = {};
    let maxNum = nums[0];
    let maxFreq = 1;
    for (let i = 0; i < nums.length; i++) {
        if (freq[nums[i]]) {
            freq[nums[i]]++;
            if (maxFreq < freq[nums[i]]) {
                maxFreq = freq[nums[i]];
                maxNum = nums[i]
            }
        }
        else {
            freq[nums[i]] = 1;
        }
        if (freq[nums[i]] > (nums.length / 2)) break;
    }

    return maxNum;
};

console.log(majorityElement([3, 2, 3]))
console.log(majorityElement([2, 2, 1, 1, 1, 2, 2]))
console.log(majorityElement([2]))