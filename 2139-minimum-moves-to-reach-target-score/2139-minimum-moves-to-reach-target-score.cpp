class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int ans = 0;
        int n = target;

        while (n > 1) {
            if (maxDoubles == 0) {
                return ans + n - 1;
            }

            if (n % 2 == 0) {
                if (maxDoubles) {
                    ans++;
                    maxDoubles--;
                    n /= 2;
                } else {
                    ans++;
                    n--;
                }
            } else {
                n--;
                ans++;
            }
        }
        return ans;
    }
};