class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int cnti = 1;
        int cntimax = 1;
        int cntd = 1;
        int cntdmax = 1;
        int n = nums.size();
        for (int i = 0; i < n - 1; ++i) {
            if (nums[i + 1] > nums[i]) {
                cnti++;
                cntd = 1;
            } else if (nums[i + 1] < nums[i]) {
                cntd++;
                cnti = 1;
            } else {
                cntd = 1;
                cnti = 1;
            }
            cntimax = max(cntimax, cnti);
            cntdmax = max(cntdmax, cntd);
        }

        return max(cntdmax, cntimax);
    }
};