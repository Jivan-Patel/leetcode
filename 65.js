/**
 * @param {string} s
 * @return {boolean}
 */
var isNumber = function(s) {
    if(s==="Infinity" || s==="-Infinity" || s==="+Infinity" || s.includes("x")) return false;
    let check = Number(s);
    return !isNaN(check);
};



console.log(isNumber("0"))
console.log(isNumber("a"))