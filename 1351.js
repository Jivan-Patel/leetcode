/**
 * @param {number[][]} grid
 * @return {number}
 */
var countNegatives = function (grid) {
    let count = 0;
    for (let arr of grid) {
        let i = arr.length - 1;
        while (arr[i] < 0 && i >= 0) {
            count++;
            i--;
        }
    }
    return count;
};

console.log(countNegatives([[4, 3, 2, -1], [3, 2, 1, -1], [1, 1, -1, -2], [-1, -1, -2, -3]]))