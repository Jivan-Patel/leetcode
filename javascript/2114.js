/**
 * @param {string[]} sentences
 * @return {number}
 */
var mostWordsFound = function(sentences) {
    let maxLen = 0;
    for(let sentence of sentences)
        maxLen = Math.max(sentence.split(' ').length, maxLen);
    return maxLen;
};

console.log(mostWordsFound(["alice and bob love leetcode", "i think so too", "this is great thanks very much"]))