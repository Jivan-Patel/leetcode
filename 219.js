
// Method 1

/**
 * @param {number[]} nums
 * @param {number} k
 * @return {boolean}
 */
var containsNearbyDuplicate = function (nums, k) {
    for (let i = k; i < nums.length; i++) {
        let j = i - k;
        while (j - i <= k) {
            if (i != j && nums[i] === nums[j]) return true;
            j++;
        }
    }

    return false;
};

// Method 2

/**
 * @param {number[]} nums
 * @param {number} k
 * @return {boolean}
 */
var containsNearbyDuplicate = function (nums, k) {
    let set = new Set();
    if (k <= 0 ) return false;
    for (let i = 0; i < nums.length; i++) {
        if (set.has(nums[i])) return true;
        if (i >= k) set.delete(nums[i - k]);
        set.add(nums[i]);
    }

    return false;
};

console.log(containsNearbyDuplicate([1, 2, 3, 1], 3));
console.log(containsNearbyDuplicate([1, 0, 1, 1], 1));
console.log(containsNearbyDuplicate([1, 2, 3, 1, 2, 3], 2));
console.log(containsNearbyDuplicate([3, 0, 0, 0, 3, 1], 0));