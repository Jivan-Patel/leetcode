/**
 * @param {number[]} nums
 * @return {boolean}
 */
var canAliceWin = function(nums) {
    let singleSum = 0;
    let multiSum = 0;
    for(let num of nums) {
        if(num < 10) singleSum += num;
        else multiSum += num;
    }
    return singleSum != multiSum;
};

console.log(canAliceWin([1,2,3,4,10]))
console.log(canAliceWin([1,2,3,4,5,14]))