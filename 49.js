/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function(strs) {
    if(strs.length <= 1) return [strs]
    let newStrs = strs.map((str) => [str.split('').sort().join(''), str]).sort();
    let currentArr = [];
    let res = [];
    console.log(newStrs)
    let i = 0;
    while(i < newStrs.length) {
        currentArr.push(newStrs[i][1]);
        if(newStrs[i][0] != newStrs[i + 1][0]) {
            res.push(currentArr);
            currentArr = [];
        }
        else {
            currentArr.push(newStrs[i + 1][1]);
            i++;
        }
        i++;
    }
    res.push(currentArr);
    return res;
};

console.log(groupAnagrams(["eat","tea","tan","ate","nat","bat"]));
console.log(groupAnagrams([""]));