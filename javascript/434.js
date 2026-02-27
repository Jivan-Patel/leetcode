/**
 * @param {string} s
 * @return {number}
 */
var countSegments = function(s) {
    let res = s.split(' ').filter((word => word != '')).length
    return res;
};

console.log(countSegments("Hello, my name  is John "))