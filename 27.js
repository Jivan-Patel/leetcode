// m1

/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */

var removeElement = function(nums, val) {
    let i = 0;
    while (i < nums.length) {
        if(nums[i] === val) {
            nums.splice(i,1);
        }
        else i++
    }
    return nums.length;
};


// m2

/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */

var removeElement = function(nums, val) {
    let i = 0;
    while (i < nums.length) {
        if(nums[i] === val) {
            nums.splice(i,1);
        }
        else i++
    }
    return nums.length;
};

// m3

/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */

var removeElement = function(nums, val) {
    let i = 0;
    while (i < nums.length) {
        if(nums[i] === val) {
            nums.splice(i,1);
            i--;
        }
        i++
    }
    return nums.length;
};

// m4

/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */

var removeElement = function(nums, val) {
    for(let i = 0;i < nums.length; i++) {
        if(nums[i] === val) {
            nums.splice(i,1);
            i--;
        }
    }
    return nums.length;
};