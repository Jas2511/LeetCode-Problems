class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size(), l = 0, r = n - 1;
        int lsum = 0, sum = 0;
        vector<int> ans(n, 0);
        for (int x : nums) {
            sum += x;
        }
        int rsum = sum;
        for (int i = 0; i < n; i++) {
            rsum -= nums[i];
            ans[i] = abs(lsum - rsum);
            lsum += nums[i];
        }
        return ans;
    }
};