class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xorall = 0;
        int n = nums.size();
        bool nonzero = false;
        for (int x : nums) {
            xorall = x ^ xorall;
            if (x != 0) {
                nonzero = true;
            }
        }
        if (xorall == 0 && nonzero == true) {
            return n - 1;
        } 
        else if(xorall==0 &&nonzero==false){
            return 0;
        }
        else if (xorall != 0) {
            return n;
        }
        return n;
    }
};