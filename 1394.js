/**
 * @param {number[]} arr
 * @return {number}
 */
var findLucky = function(arr) {
    let obj = {};
    let res = -1;
    for(let num of arr) {
        if(obj[num]) obj[num]++;
        else obj[num] = 1;
    }
    for(let key in obj) {
        if(obj[key] == key) res = (res < key) ? obj[key] : res;
    }
    return res;
};

console.log(findLucky([2,2,3,4]));
console.log(findLucky([1,2,2,3,3,3]));
console.log(findLucky([2,2,2,3,3]));