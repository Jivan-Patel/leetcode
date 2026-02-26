/**
 * @param {number} arrivalTime
 * @param {number} delayedTime
 * @return {number}
 */
var findDelayedArrivalTime = function(arrivalTime, delayedTime) {
    return (arrivalTime + delayedTime) % 24;
};

console.log(findDelayedArrivalTime(15, 5)); // 20
console.log(findDelayedArrivalTime(13, 11)); // 0
console.log(findDelayedArrivalTime(1, 5)); // 6
console.log(findDelayedArrivalTime(6, 6)); // 12
