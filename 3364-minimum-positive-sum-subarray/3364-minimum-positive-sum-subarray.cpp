class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int sum = 0;
        int ans = INT_MAX;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            sum = 0;
            for (int j = i; j < n && j < i + r; ++j) {

                while (j < n && j < i + l - 1) {
                    sum += nums[j];
                    j++;
                }
                if (j < n)
                    sum += nums[j];

                if (j < n && sum > 0) {
                    ans = min(sum, ans);
                }
            }
        }
        if (ans == INT_MAX)
            return -1;
        return ans;
    }
};