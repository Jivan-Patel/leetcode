// Method-1

/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortArrayByParity = function(nums) {
    let res = [];
    for(let num of nums) {
        if(num%2===0) res.unshift(num);
        else res.push(num);
    }
    return res;
};


// Method-2

/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortArrayByParity = function(nums) {
    let res = [];
    for(let num of nums) {
        if(num%2===0) res.push(num);
    }
    for(let num of nums) {
        if(num%2===1) res.push(num);
    }
    return res;
};


console.log(sortArrayByParity([3,1,2,4]));
console.log(sortArrayByParity([0]));