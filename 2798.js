// Method - 1

/**
 * @param {number[]} hours
 * @param {number} target
 * @return {number}
 */
var numberOfEmployeesWhoMetTarget = function (hours, target) {
    let res = 0;
    for (let i = 0; i < hours.length; i++) {
        if (hours[i] >= target) res++;
    }
    return res;
};

// Method - 2

/**
 * @param {number[]} hours
 * @param {number} target
 * @return {number}
 */
var numberOfEmployeesWhoMetTarget = function (hours, target) {
    let res = hours.reduce((count, hour) => {
        return (hour >= target) ? count + 1 : count;
    }, 0)
    return res;
};

console.log(numberOfEmployeesWhoMetTarget([0, 1, 2, 3, 4], 2))