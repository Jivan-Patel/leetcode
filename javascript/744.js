// Method-1

/**
 * @param {character[]} letters
 * @param {character} target
 * @return {character}
 */
var nextGreatestLetter = function (letters, target) {
    let set = new Set(letters);
    let startPoint = target.charCodeAt(0) + 1;
    for (let i = startPoint; i < 124; i++) {
        let c = String.fromCharCode(i);
        if (set.has(c)) return c;
    }
    return letters[0];
};


// Method-2

/**
 * @param {character[]} letters
 * @param {character} target
 * @return {character}
 */
var nextGreatestLetter = function (letters, target) {
    let i = 0;
    let j = letters.length - 1;
    let res = letters[0]
    while (i <= j) {
        let check = Math.floor((i + j) / 2);
        if (target >= letters[check]) {
            i = check + 1;
            if (target < letters[i]) return letters[i];
        }
        else if (target < letters[check]) {
            j = check - 1;
            if (target >= letters[j]) return letters[j + 1];
        }
    }
    return res;
};

console.log(nextGreatestLetter(["c", "f", "j"], "c"))
console.log(nextGreatestLetter(["x", "x", "y", "y"], "z"))
console.log(nextGreatestLetter(["a","b"], "z"))