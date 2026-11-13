class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int m = s.length();
        int n = p.length();
        vector<int> ans;
        vector<int> help(26, 0);
        for (char c : p) {
            help[c - 'a']++;
        }
        for (int i = 0; i < m; ++i) {
            vector<int> temp(help);
            for (int j = i; j < m && j - i < n; j++) {
                temp[s[j] - 'a']--;
            }
            bool re = true;
            for (int x : temp) {
                if (x != 0) {
                    re = false;
                }
            }
            if (re) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};