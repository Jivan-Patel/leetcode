// Method-1

/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function (height) {
    let max = 0;
    for (let i = 0; i < height.length; i++) {
        for (let j = i + 1; j < height.length; j++) {
            let area = Math.min(height[i], height[j]) * (j - i);
            if (area > max) max = area;
        }
    }
    return max;
};


// Method-2

/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function (height) {
    let max = 0;
    let i = 0;
    let j = height.length - 1;
    while (j > i) {
        let minI =(height[i] < height[j]) ? i : j;
        let area = height[minI] * (j - i);
        if (area > max) max = area;
        (minI === i) ? i++ : j--;
    }
    return max;
};

console.log(maxArea([1, 8, 6, 2, 5, 4, 8, 3, 7]));
console.log(maxArea([1, 1]));