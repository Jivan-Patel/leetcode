// Method-1

/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function (s) {
    let checkS = "";
    let maxLen = 0;
    let i = 0;
    while (i < s.length) {
        if (checkS.includes(s[i])) {
            maxLen = (maxLen >= checkS.size) ? maxLen : checkS.size;
            i = i - checkS.size + 1;
            checkS = "";
        }
        else {
            checkS += s[i];
            i++;
        }
    }
    maxLen = (maxLen >= checkS.size) ? maxLen : checkS.size;
    return maxLen;
};



// Method-2

/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function (s) {
    let checkS = [];
    let maxLen = 0;
    let i = 0;
    while (i < s.length) {
        for (let j = 0; j < checkS.size; j++) {
            if (checkS[j] === s[i]) {
                maxLen = (maxLen >= checkS.size) ? maxLen : checkS.size;
                checkS.splice(0, j + 1);
                break;
            }
        }
        checkS.push(s[i]);
        i++;
    }
    maxLen = (maxLen >= checkS.size) ? maxLen : checkS.size;
    return maxLen;
};


// Method-3

/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function (s) {
    let checkS = new Set();
    let maxLen = 0;
    let i = 0;
    let left = 0;
    while (i < s.length) {
        if (checkS.has(s[i])) {
            maxLen = (maxLen >= checkS.size) ? maxLen : checkS.size;
            while (checkS.has(s[i])) {
                checkS.delete(s[left]);
                left++;
            }
        }
        checkS.add(s[i]);
        i++;
    }
    maxLen = (maxLen >= checkS.size) ? maxLen : checkS.size;
    return maxLen;
};


console.log(lengthOfLongestSubstring("abcabcbb"));
console.log(lengthOfLongestSubstring("pwwkew"));