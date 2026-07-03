class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;
        int maxi = 0;
        for (int i = 0; i < nums.size(); i++) {
            int r = i;
            cnt = 0;
            while (r < nums.size() && nums[r] != 0) {
                cnt++;
                r++;
            }
            i = r;

            maxi = max(maxi, cnt);
        }
        return maxi;
    }
};