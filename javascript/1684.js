/**
 * @param {string} allowed
 * @param {string[]} words
 * @return {number}
 */
var countConsistentStrings = function (allowed, words) {
    let res = 0;
    let set = new Set(allowed);
    for (let i = 0; i < words.length; i++) {
        let check = true;
        for (let j = 0; j < words[i].length; j++) {
            if (!set.has(words[i][j])) {
                check = false;
                break;
            }
        }
        if(check) res++;
    }
    return res;
};