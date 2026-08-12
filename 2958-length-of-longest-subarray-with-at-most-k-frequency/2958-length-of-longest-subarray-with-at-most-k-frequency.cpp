class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int maxl = 0;
        int l = 0;
        for (int r = 0; r < nums.size(); ++r) {
            freq[nums[r]]++;
            while (freq[nums[r]] > k && l <= r) {
                freq[nums[l]]--;
                l++;
            }
            maxl = max(r - l + 1, maxl);
        }
        return maxl;
    }
};