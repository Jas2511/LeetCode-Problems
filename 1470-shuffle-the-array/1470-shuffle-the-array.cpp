class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2 * n);
        int l = 0;
        for (int i = 0; i < ans.size(); i += 2) {
            ans[i] = nums[l];
            ans[i + 1] = nums[n];
            n++;
            l++;
        }
        return ans;
    }
};