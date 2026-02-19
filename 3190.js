/**
 * @param {number[]} nums
 * @return {number}
 */
var minimumOperations = function (nums) {
    return nums.reduce((count, num) => (num % 3 === 0) ? count : count + 1, 0);
};

console.log(minimumOperations([1, 2, 3, 4]))
console.log(minimumOperations([3, 6, 9]))