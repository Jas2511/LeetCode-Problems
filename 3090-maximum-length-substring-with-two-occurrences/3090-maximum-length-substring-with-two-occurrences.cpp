class Solution {
public:
    int maximumLengthSubstring(string s) {
        int ans = 0;
        int l = 0;
        vector<int> h(26, 0);
        for (int r = 0; r < s.length(); r++) {

            h[ s[r]-'a']++;

            while (l <= r && h[s[r]-'a'] > 2) {
                h[s[l]-'a']--;
                l++;
            }
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};