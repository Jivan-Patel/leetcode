// Method-1
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var transformArray = function (nums) {
    return nums.map((num) => num % 2).sort();
};


// Method-2

/**
 * @param {number[]} nums
 * @return {number[]}
 */
var transformArray = function (nums) {
    let res = [];
    for (let i = 0; i < nums.length; i++) {
        (nums[i] % 2 == 0) ? res.unshift(0) : res.push(1);
    }
    return res;
};

console.log(transformArray([4, 3, 2, 1]))
console.log(transformArray([1, 5, 1, 4, 2]))