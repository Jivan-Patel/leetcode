// Method-1

/**
 * @param {string} jewels
 * @param {string} stones
 * @return {number}
 */
var numJewelsInStones = function(jewels, stones) {
    jewels = jewels.split('').sort().join('');
    stones = stones.split('').sort().join('');
    let i = 0, j = 0, count = 0;
    while(i < jewels.length && j < stones.length) {
        if(jewels[i] > stones [j]) j++;
        else if(jewels[i] < stones [j]) i++;
        else {
            count++;
            j++;
        }
    }

    return count;
};


// Method-2

/**
 * @param {string} jewels
 * @param {string} stones
 * @return {number}
 */
var numJewelsInStones = function(jewels, stones) {
    let set = new Set(jewels.split(''));
    let count = 0;
    for(let ch of stones) 
        if(set.has(ch)) count++;
    return count;
};

console.log(numJewelsInStones("aA", "aAAbbb"))