/**
 * @param {number[]} nums
 * @return {number}
 */
var minElement = function (nums) {
    nums = nums.map((num) => {
        let sum = 0;
        while (num > 0) {
            sum += (num % 10);
            num = Math.floor(num / 10);
        }
        return sum;
    })

    return Math.min(...nums);
};

console.log(minElement([10, 12, 13, 14]))
console.log(minElement([1, 2, 3, 4]))
console.log(minElement([999, 19, 199]))