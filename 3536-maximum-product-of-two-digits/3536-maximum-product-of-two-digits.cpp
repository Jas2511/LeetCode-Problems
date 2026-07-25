class Solution {
public:
    int maxProduct(int n) {
        vector<int> nums;
        while (n) {
            nums.push_back(n % 10);
            n /= 10;
        }
        //nums.push_back(n);
        sort(nums.begin(), nums.end(), greater<int>());
        int ans = nums[0] * nums[1];
        return ans;
    }
};