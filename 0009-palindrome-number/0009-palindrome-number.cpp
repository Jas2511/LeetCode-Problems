class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int t = x;
        long long rev = 0;

        while (t) {
         
            rev *= 10;
            rev += t % 10;
                t /= 10;
           
        }
        if (rev == x) {
            return true;
        }
        return false;
    }
};