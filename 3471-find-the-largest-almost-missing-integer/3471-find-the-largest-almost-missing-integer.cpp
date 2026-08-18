class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        vector<int> freq(51, 0);
        int n = nums.size();
        int ans = -1;
        int l = 0;
        for (int r = k - 1; r < n; ++r) {
            int i = l;
            vector<int> cnt(51, 0);
            while (i <= r) {
                cnt[nums[i]]++;
                if (cnt[nums[i]] < 2) {
                    freq[nums[i]]++;
                }
                i++;
            }
            l++;
        }
        for (int i = 0; i < 51; ++i) {
            if (freq[i] == 1) {
                ans = max(ans, i);
            }
        }
        return ans;
    }
};