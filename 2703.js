/**
 * @param {...(null|boolean|number|string|Array|Object)} args
 * @return {number}
 */
var argumentsLength = function(...args) {
    return args.length // in lc
    return args[0].length // in vs code
};

/**
 * argumentsLength(1, 2, 3); // 3
 */

console.log(argumentsLength([5]))
console.log(argumentsLength([{}, null, "3"]))