class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        vector<int> dp(n + 1, 0);
        dp[0] = 0;
        dp[1] = 1 + costs[0];
        if (n == 1) {
            return dp[1];
        }
        dp[2] = costs[1] + min(dp[0] + 4, dp[1] + 1);
        if (n == 2) {
            return dp[2];
        }
        for (int i = 3; i <= n; ++i) {

            dp[i] = costs[i - 1] +
                    min(dp[i - 2] + 4, min(dp[i - 1] + 1, dp[i - 3] + 9));
        }

        return dp[n];
    }
};