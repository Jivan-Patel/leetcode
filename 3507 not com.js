/**
 * @param {number[]} nums
 * @return {number}
 */
var minimumPairRemoval = function (nums) {
    let maxLen = 0;
    let asdf = []
    for(let i = 0; i < nums.length; i++) {
        let curLen = 0;
        let curMaxNum = nums[i];
        let asd = [];
        for(let j = i; j < nums.length; j++) {
            if(curMaxNum <= nums[j]){
                curMaxNum = nums[j];
                curLen++;
                asd.push(nums[j])
            }
        }
        if(maxLen < curLen) {
            maxLen = curLen;
            asdf = asd;
        }
    }
    console.log(asdf);
    
    return nums.length - maxLen;
};

console.log(minimumPairRemoval([2,2,-1,3,-2,2,1,1,1,0,-1]))
console.log(minimumPairRemoval([1,2,2]))
console.log(minimumPairRemoval([5,2,3,1]))