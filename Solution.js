
/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function (nums) {

    let occuredOnce = 0;
    let occuredTwice = 0;

    for (let n of nums) {
        occuredOnce = (~occuredTwice) & (occuredOnce ^ n);
        occuredTwice = (~occuredOnce) & (occuredTwice ^ n);
    }

    return occuredOnce;
};
