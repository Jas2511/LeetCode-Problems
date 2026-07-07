class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        long long x;
        int i = 1;
        while (n != 0) {

            if (n % 10 != 0) {
                sum += n % 10;
                x += i * (n % 10);
                i *= 10;
            }

            n /= 10;
        }

        return x * sum;
    }
};