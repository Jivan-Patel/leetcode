/**
 * @param {number[]} numbers
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (numbers, target) {
    let i = 0;
    let j = numbers.length - 1;
    while (i < j) {
        if (numbers[i] + numbers[j] > target) j--;
        else if (numbers[i] + numbers[j] < target) i++;
        else return [i + 1, j + 1];
    }
    return [];
};

console.log(twoSum([2, 7, 11, 15], 9));
console.log(twoSum([2, 3, 4], 6));
console.log(twoSum([-1, 0], -1));