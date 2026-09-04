class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size(), mx = 0, ans = -1;
        vector<int> prfx(n, 0);
        prfx[n - 1] = nums[n - 1];
        int s = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            s = min(nums[i], s);
            prfx[i] = s;
        }
        for (int i = 0; i < n; ++i) {
            mx = max(mx, nums[i]);

            if (mx - prfx[i] <= k) {
                if (ans == -1) {
                    ans = i;
                }
                ans = min(ans, i);
            }
        }
        return ans;
    }
};