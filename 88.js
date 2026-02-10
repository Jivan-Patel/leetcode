/**
 * @param {number[]} nums1
 * @param {number} m
 * @param {number[]} nums2
 * @param {number} n
 * @return {void} Do not return anything, modify nums1 in-place instead.
 */
var merge = function (nums1, m, nums2, n) {
    let i = 0;
    let j = 0;
    if (nums1.length > m) {
        nums1.splice(m, nums1.length - m);
    }
    while (nums1.length < m + n ) {
        if (nums1[i]==undefined) {
            nums1.push(nums2[j])
            j++;
        }
        else if ((nums1[i] > nums2[j])) {
            nums1.splice(i, 0, nums2[j]);
            j++
        }
        i++;
    }
    return nums1;

};


console.log(merge([1, 2, 3, 0, 0, 0], 3, [2, 5, 6], 3));
console.log(merge([0], 0, [1], 1));
console.log(merge([2, 0], 1, [1], 1));
console.log(merge([4, 5, 6, 0, 0, 0], 3, [1, 2, 3], 3));