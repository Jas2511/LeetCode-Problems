class Solution {
public:
    bool check(int n, int t) {
        int pro = 1;
        while (n) {
            pro *= n % 10;
            n /= 10;
        }
        if (pro % t == 0) {
            return true;
        }
        return false;
    }
    int smallestNumber(int n, int t) {

        while (!check(n, t)) {
            n++;
        }

        return n;
    }
};