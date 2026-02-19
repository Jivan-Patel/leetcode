/**
 * @param {number[]} groupSizes
 * @return {number[][]}
 */
var groupThePeople = function (groupSizes) {
    let obj = {};
    for (let i = 0; i < groupSizes.length; i++) {
        if (obj[groupSizes[i]]) obj[groupSizes[i]].push(i)
        else obj[groupSizes[i]] = [i];
    }
    return obj;
};

console.log(groupThePeople([3,3,3,3,3,1,3]));
console.log(groupThePeople([2,1,3,3,3,2]));