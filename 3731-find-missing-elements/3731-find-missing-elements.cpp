class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (int x : nums) {
            mp[x] = 1;
            
        }
        vector<int> ans;
        int low = 100, maxi = 0;
        for (int i = 0; i < nums.size(); ++i) {
            maxi = max(maxi, nums[i]);
            low = min(low, nums[i]);
        }
        for (int i = low + 1; i < maxi; ++i) {
            if (!mp.contains(i)) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};