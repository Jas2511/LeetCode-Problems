class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();

        // 1. Find sum of longest sequential prefix
        int sum = nums[0];

        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1] + 1)
                sum += nums[i];
            else
                break;
        }

        // 2. Place values [sum, sum+n-1] at indices [0, n-1]
        for (int i = 0; i < n; i++) {
            while (nums[i] >= sum &&
                   nums[i] < sum + n &&
                   nums[nums[i] - sum] != nums[i]) {
                
                swap(nums[i], nums[nums[i] - sum]);
            }
        }

        // 3. First index whose value isn't present
        for (int i = 0; i < n; i++) {
            if (nums[i] != sum + i)
                return sum + i;
        }

        return sum + n;
    }
};