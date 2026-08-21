/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (nums, target) {
    let ans = [];
    let freq = new Map();
    for (n = 0; n < nums.length; n++) {
        freq.set(nums[n], n);
    }
    for (n = 0; n < nums.length; n++) {
        if (freq.has(target - nums[n]) && freq.get(target - nums[n])!=n) {
            ans.push(n);
            ans.push(freq.get(target - nums[n]));
             return ans;
        }
    }
   
};