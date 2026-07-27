class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i = 0, j = 0;
        for (int x : nums) {
            i = max(i, min(j, x));
            j = max(j, x);
        }
        return (j - 1) * (i - 1);
    }
};