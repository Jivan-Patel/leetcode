/**
 * @param {number[]} order
 * @param {number[]} friends
 * @return {number[]}
 */
var recoverOrder = function(order, friends) {
    let set = new Set(friends);
    let res = [];
    for(let n of order) {
        if(set.has(n)) res.push(n);
    }
    return res;
};


console.log(recoverOrder([3,1,2,5,4], [1,3,4]))
console.log(recoverOrder([1,4,5,3,2],  [2,5]))