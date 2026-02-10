//Method-1

/**
 * @param {number[]} nums
 * @return {number}
 */
var minimumAverage = function (nums) {
    nums.sort((a, b) => a - b);
    let avg = [];

    while (nums[0] != undefined) {
        let average = 0;
        if (nums[1] != undefined) {
            average = (nums.pop() + nums.shift()) / 2;
        }
        else {
            average = nums.pop();
        }
        avg.push(average);
    }
    let max = Math.min(...avg);

    return max;
};



// Method - 2

/**
 * @param {number[]} nums
 * @return {number}
 */
var minimumAverage = function (nums) {
    nums.sort((a, b) => a - b);
    let minAvg = Infinity;
    let i = 0;
    let j = nums.length - 1;

    while (j > i) {
        let average = (nums[i] + nums[j]) / 2;
        if (minAvg > average) minAvg = average;
        i++;
        j--;
    }
    return minAvg;
};



console.log(minimumAverage([7, 8, 3, 4, 15, 13, 4, 1]));
