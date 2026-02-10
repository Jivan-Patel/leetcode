// Method- 1

/**
 * @param {string[]} names
 * @param {number[]} heights
 * @return {string[]}
 */
var sortPeople = function (names, heights) {
    let i = 0;
    let len = names.length;
    for (let i = 0; i < len; i++) {
        for (let j = 0; j < len - i - 1; j++) {
            if (heights[j] < heights[j + 1]) {
                [heights[j], heights[j + 1]] = [heights[j + 1], heights[j]];
                [names[j], names[j + 1]] = [names[j + 1], names[j]];
            }
        }
    }
    return names;
};


// Method- 2

/**
 * @param {string[]} names
 * @param {number[]} heights
 * @return {string[]}
 */
var sortPeople = function (names, heights) {
    let len = names.length;
    let combArr = []
    for (let i = 0; i < len; i++) {
        combArr.push([names[i], heights[i]]);
    }
    combArr.sort((a, b) => b[1] - a[1]);
    let res = combArr.map((comb) => comb[0])
    return res;
};

console.log(sortPeople(["Mary", "John", "Emma"], [180, 165, 170]))
console.log(sortPeople(["Alice", "Bob", "Bob"], [155, 185, 150]))