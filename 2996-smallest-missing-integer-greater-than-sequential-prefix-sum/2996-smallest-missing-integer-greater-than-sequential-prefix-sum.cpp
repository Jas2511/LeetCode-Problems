class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_map<int, int> p;
if(nums.size()==1){
    return nums[0]+1;
}
        int y = 0;
        for (int x : nums) {

            p[x] = 1;
        }
        int sum = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] - nums[i - 1] == 1) {
                sum += nums[i];
                y = sum;
            }

            else {
                y = sum;
                while (p[y]) {
                    y++;
                }
                break;
            }
        }

        return y;
    }
};