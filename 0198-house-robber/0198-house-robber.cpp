class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if (n == 1)
            return nums[0];

        if (n == 2)
            return max(nums[0], nums[1]);

        int maxi = nums[0];
        int prev = nums[1];
        int maxi2 = max(nums[0], nums[1]);

        for (int i = 2; i < n; ++i) {

            int oldMaxi = maxi;

            maxi = max(maxi, prev);

            int curr = nums[i] + oldMaxi;

            maxi2 = max(maxi2, curr);

            prev = curr;
        }

        return maxi2;
    }
};