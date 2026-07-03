class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        for (int i = 0; i < nums.size(); i++) {
            int r = 0;

            while (r < nums.size()) {

                if (nums[r] < nums[i]) {
                    ans[i]++;
                }
                r++;
            }
        }
        return ans;
    }
};
