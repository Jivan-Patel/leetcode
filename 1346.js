// Method-1
/**
 * @param {number[]} arr
 * @return {boolean}
 */
var checkIfExist = function (arr) {
    let set = new Set(arr);
    for (let i = 0; i < arr.length; i++) {
        if (set.has(arr[i] * 2)) return true;
        if (arr[i] == 0) {
            for (let j = i + 1; j < arr.length; j++) if (arr[j] === 0) return true;
        }
    }
    return false;
};

// Method-2
/**
 * @param {number[]} arr
 * @return {boolean}
 */
var checkIfExist = function (arr) {
    let seen = new Set();
    for (let i = 0; i < arr.length; i++) {
        if (seen.has(arr[i] * 2)) return true;
        if (arr[i]%2===0 && seen.has(arr[i] / 2)) return true;
        seen.add(arr[i]);
    }
    return false;
};


console.log(checkIfExist([10, 2, 5, 3]));
console.log(checkIfExist([3, 1, 7, 11]));