// Solution 1 (Time Limit Exceeded)

/**
 * @param {number[]} arr
 * @return {number[][]}
 */
var minimumAbsDifference = function (arr) {
    let curDiff = Infinity;
    let curArr = [];
    for (let i = 0; i < arr.length; i++) {
        for (let j = i + 1; j < arr.length; j++) {
            let abs = (arr[i] > arr[j]) ? arr[i] - arr[j] : arr[j] - arr[i];
            if (abs < curDiff) {
                curDiff = abs;
                curArr = (arr[i] < arr[j]) ? [[arr[i], arr[j]]] : [[arr[j], arr[i]]]
            }
            else if (abs === curDiff) {
                curArr.push((arr[i] < arr[j]) ? [arr[i], arr[j]] : [arr[j], arr[i]])
            }
        }
    }
    return curArr.sort((a, b) => a[0] - b[0]);
};



// Solution 2

/**
 * @param {number[]} arr
 * @return {number[][]}
 */
var minimumAbsDifference = function (arr) {
    let curDiff = Infinity;
    let curArr = [];
    arr = arr.sort((a, b) => a - b);
    for (let i = 0; i < arr.length; i++) {
        let abs = arr[i+1] - arr[i];
            if (abs < curDiff) {
                curDiff = abs;
                curArr = [[arr[i], arr[i+1]]]
            }
            else if (abs === curDiff) {
                curArr.push([arr[i], arr[i+1]])
            }
    }
    return curArr;
};
