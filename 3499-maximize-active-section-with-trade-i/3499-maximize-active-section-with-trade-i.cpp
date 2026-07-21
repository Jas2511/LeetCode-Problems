class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int i = 0, n = s.size();
        int prev = INT_MIN;
        int ans = 0;
        int curr = 0;
        int cnt = count(s.begin(), s.end(), '1');
        while (i < n) {
            int start = i;
            while (i < n && s[i] == s[start]) {
                ++i;
            }

            if (s[start] == '0') {
                curr = i - start;
                ans = max(ans, prev + curr);
                prev = curr;
            }
        }
        return ans + cnt;
    }
};