/**
 * @param {number} n
 * @return {boolean}
 */
var checkDivisibility = function (n) {
    let sum = 0;
    let pro = 1;
    let m = n;
    while (n) {
        sum += n % 10;
        pro *= n % 10;
        n = Math.floor(n / 10);
    }
    sum += pro;
    return (m % sum === 0);
};