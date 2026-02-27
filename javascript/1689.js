/**
 * @param {string} n
 * @return {number}
 */
var minPartitions = function(n) {
    const res = n.split('').reduce((max, digit) =>{
        if(max < digit) max = digit;
        return max;
    } ,(n[0]));
    return Number(res);
};

console.log(minPartitions("32"));
console.log(minPartitions("82734"));
console.log(minPartitions("27346209830709182346"));