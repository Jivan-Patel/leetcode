/**
 * @param {string[]} details
 * @return {number}
 */
var countSeniors = function(details) {
    let count = 0;
    for(let i = 0; i < details.length; i++) {
        if(details[i][11] > 6) count++;
        else if(details[i][11] == 6 && details[i][12] > 0) count++;
    }
    return count;
};

console.log(countSeniors(["7868190130M7522","5303914400F9211","9273338290F4010"]))