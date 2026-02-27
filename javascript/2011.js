// Method-1

/**
 * @param {string[]} operations
 * @return {number}
 */
var finalValueAfterOperations = function (operations) {
    let x = 0;
    for (const operation of operations) {
        switch(operation) {
            case "--X": 
                --x;
                break;
            case "++X": 
                ++x;
                break;
            case "X--": 
                x--;
                break;
            case "X++": 
                x++;
                break;
        }
    }
    return x;
};


// Method-2

/**
 * @param {string[]} operations
 * @return {number}
 */
var finalValueAfterOperations = function (operations) {
    let x = 0;
    for (const operation of operations) {
        if(operation.includes('+')) x++;
        else x--;
    }
    return x;
};

console.log(finalValueAfterOperations(["--X", "X++", "X++"]))