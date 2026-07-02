class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(2 * nums.size());
        for (int i = 0; i < 2 * nums.size(); i++) {
            int j = 0;
            j = i % nums.size();
            ans[i] = nums[j];
            j++;
        }
        return ans;
    }
};