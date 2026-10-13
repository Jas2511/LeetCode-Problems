class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            nums[i] = nums[i] * nums[i];
        }
        sort(nums.begin(), nums.end());
        int l = 0, r = n / 2;
        while (r < n && l < n / 2) {
            ans -= nums[l];
            ans += nums[r];
            l++;
            r++;
        }
        if (r < n) {
            ans += nums[r];
        }
        return ans;
    }
};