class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int pro = 1;
        int m = n;
        while (n) {
            sum += n % 10;
            pro *= n % 10;
            n /= 10;
        }
        sum += pro;
        return (m % sum == 0);
    }
};