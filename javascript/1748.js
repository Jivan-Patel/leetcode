/**
 * @param {number[]} nums
 * @return {number}
 */
var sumOfUnique = function(nums) {
    let freq = {};
    let sum = 0;
    for(let num of nums) {
        if(freq[num] != undefined) freq[num] = false;
        else freq[num] = true;
    }
    for(let num in freq) 
        if(freq[num] === true) sum += Number(num);
    
    return sum;
};

console.log(sumOfUnique([1,2,3,2]));
console.log(sumOfUnique([1,1,1,1,1]));
console.log(sumOfUnique([1,2,3,4,5]));