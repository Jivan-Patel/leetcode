/**
 * @param {number[][]} accounts
 * @return {number}
 */
var maximumWealth = function (accounts) {
    let max = 0;
    for (let account of accounts) {
        let sum = account.reduce((count, num) => count + num, 0);
        if (max < sum) max = sum;
    }
    return max;
};

console.log(maximumWealth([[1, 2, 3], [3, 2, 1]]));
console.log(maximumWealth([[1, 5], [7, 3], [3, 5]]));
console.log(maximumWealth([[2, 8, 7], [7, 1, 3], [1, 9, 5]]));