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

console.log(finalValueAfterOperations(["--X", "X++", "X++"]))