// Method 1  (Not accepted by leetcode bcz timecomplexity => O(m+n) but required is O(Log(m+n)))

/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var findMedianSortedArrays = function (nums1, nums2) {
    let i = 0, j = 0;
    let res = [];
    while (i < nums1.length || j < nums2.length) {
        if ((nums2[j] === undefined && nums1[i] != undefined)) {
            res.push(...nums1.slice(i, nums1.length))
            break;
        }
        else if ((nums2[j] != undefined && nums1[i] === undefined)) {
            res.push(...nums2.slice(j, nums2.length))
            break;
        }
        if (nums1[i] < nums2[j]) {
            res.push(nums1[i])
            i++;
        }
        else if (nums1[i] === nums2[j]) {
            res.push(nums1[i], nums2[j])
            i++;
            j++;
        }
        else if (nums1[i] > nums2[j]) {
            res.push(nums2[j]);
            j++;
        }
    }
    console.log(res)
    return (res.length % 2 === 1) ? res[(res.length - 1) / 2] : (res[(res.length - 2) / 2] + res[((res.length) / 2)]) / 2
};


// Method 2 (Not accepted by leetcode bcz timecomplexity => O(m+n) but required is O(Log(m+n)))

/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var findMedianSortedArrays = function (nums1, nums2) {
    let i = 0, j = 0;
    let isOdd = (nums1.length + nums2.length) % 2 === 1;
    let mid = isOdd ? [(nums1.length + nums2.length - 1) / 2] : [((nums1.length + nums2.length - 2) / 2), ((nums1.length + nums2.length) / 2)]
    let sum = null;
    while (i < nums1.length || j < nums2.length) {
        if ((nums2[j] === undefined && nums1[i] != undefined) || (nums1[i] <= nums2[j])) {
            if (isOdd && mid[0] === i + j) {
                return nums1[i];
            }
            else if (!isOdd) {
                if (mid[0] === i + j) {
                    sum = nums1[i]
                }
                else if (mid[1] === i + j) {
                    return (sum + nums1[i]) / 2
                }
            }
            i++;
        }
        else if ((nums2[j] != undefined && nums1[i] === undefined) || (nums1[i] > nums2[j])) {
            if (isOdd && mid[0] === i + j) {
                return nums2[j];
            }
            else if (!isOdd) {
                if (mid[0] === i + j) {
                    sum = nums2[j]
                }
                else if (mid[1] === i + j) {
                    return (sum + nums2[j]) / 2
                }
            }
            j++;
        }
    }
};


console.log(findMedianSortedArrays([1, 3], [2]))
console.log(findMedianSortedArrays([1, 2], [3, 4]))
console.log(findMedianSortedArrays([1], [0]))