// Method-1

/**
 * @param {string} s
 * @param {number} k
 * @return {string}
 */
var reversePrefix = function (s, k) {
    let res = "";
    for (let i = 0; i < k; i++) {
        res = s[i] + res;
    }
    for (let i = k; i < s.length; i++) {
        res += s[i];
    }
    return res;
};


// Method-2

/**
 * @param {string} s
 * @param {number} k
 * @return {string}
 */
var reversePrefix = function (s, k) {
    s = s.split('');
    let i = 0;
    let j = k - 1;
    while (i < j) {
        let temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    return s.join('');
};


// Method-3

/**
 * @param {string} s
 * @param {number} k
 * @return {string}
 */
var reversePrefix = function (s, k) {
    s = s.split('')
    temp = s.splice(0, k).reverse();
    s.unshift(...temp);
    return s.join('');
};

console.log(reversePrefix("abcd", 2));
console.log(reversePrefix("xyx", 3));
console.log(reversePrefix("hey", 1));