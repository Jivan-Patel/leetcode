// Method-1

/**
 * @param {string} ransomNote
 * @param {string} magazine
 * @return {boolean}
 */
var canConstruct = function (ransomNote, magazine) {
    let r = ransomNote.split('').sort();
    let m = magazine.split('').sort();
    let i = 0, j = 0;
    while (i < r.length && j < m.length) {
        if (r[i] == m[j]) i++;
        j++;
    }
    return i === r.length;
};


// Method-2

/**
 * @param {string} ransomNote
 * @param {string} magazine
 * @return {boolean}
 */
var canConstruct = function (ransomNote, magazine) {
    let rfreq = {};
    for(let i = 0; i < ransomNote.length; i++) {
        if(rfreq[ransomNote[i]]) rfreq[ransomNote[i]]++;
        else rfreq[ransomNote[i]] = 1;
    }
    for(let i = 0; i < magazine.length; i++) {
        if(rfreq[magazine[i]]) rfreq[magazine[i]]--;
    }
    for(let key in rfreq) {
        if(rfreq[key] > 0) return false;
    }
    return true;
};


console.log(canConstruct("a", "b"));
console.log(canConstruct("aba", "ab"));
console.log(canConstruct("aa", "aab"));
console.log(canConstruct("aa", "aba"));