class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for (int i = 0; i < nums.size(); ++i) {
            int x = 0;

            while (nums[i]) {
                x += nums[i] % 10;
                nums[i] /= 10;
            }
            if (i == x) {
                return i;
            }
        }
        return -1;
    }
};