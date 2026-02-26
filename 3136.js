/**
 * @param {string} word
 * @return {boolean}
 */
var isValid = function(word) {
    if (word.length < 3) return false
    let isVowel = false;
    let isConsonant = false;
    let vowel = new Set(['a','e','i','o','u','A','E','I','O','U']);
    for(let ch of word) {
        if((ch < 'a' || ch > 'z') && (ch < '0' || ch > '9') && (ch < 'A' || ch > 'Z')) return false;
        else if(isVowel && isConsonant) continue;
        else if(vowel.has(ch)) isVowel = true;
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) isConsonant = true;
    }
    return isVowel && isConsonant;
};

console.log(isValid("234Adas"));
console.log(isValid("b3"));
console.log(isValid("AhI"));
console.log(isValid("ab#d"));