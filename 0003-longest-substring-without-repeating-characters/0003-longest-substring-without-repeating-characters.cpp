class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> cnt;
        int ans = 0;
        int l = 0;
        for (int r = 0; r < s.length(); r++) {
            cnt[s[r]]++;
            while (l <= r && cnt[s[r]] > 1) {
                cnt[s[l]]--;
                l++;
            }
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};