class Solution {
public:
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    long long gcdSum(vector<int>& nums) {
        vector<int> prefix(nums);
        long long sum = 0;
        int maxi = nums[0];
        prefix[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            maxi = max(nums[i], maxi);
            prefix[i] = gcd(maxi, nums[i]);
        }
        sort(prefix.begin(), prefix.end());
        int r = prefix.size() - 1;
        for (int l = 0; l < prefix.size(); l++) {
            while (l < r) {
                sum += gcd(prefix[l], prefix[r]);
                l++;
                r--;
            }
        }
        return sum;
        ;
    }
};