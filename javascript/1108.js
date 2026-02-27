// Method-1
/**
 * @param {string} address
 * @return {string}
 */
var defangIPaddr = function (address) {
    let res = "";
    for (let ch of address) {
        res += (ch !== ".") ? ch : '[.]'
    }
    return res;
};


// Method-2
/**
 * @param {string} address
 * @return {string}
 */
var defangIPaddr = function (address) {
    let res = "";
    for (let i = 0; i < address.length; i++) {
        if (address[i] === ".") res += '[.]';
        else res += address[i];
    }
    return res;
};


// Method-3
/**
 * @param {string} address
 * @return {string}
 */
var defangIPaddr = function (address) {
    let res = [];
    for (let i = 0; i < address.length; i++) {
        if (address[i] === ".") res.push('[', '.', ']');
        else res.push(address[i]);
    }
    return res.join('');
};

console.log(defangIPaddr("1.1.1.1"));