class Solution {
public:
    int mirrorDistance(int n) {
        int r = 0;
        int m = n;
        while (m > 0) {
            r *= 10;
            r += m % 10;
            m /= 10;
        }
      
        return abs(n - r);
    }
};