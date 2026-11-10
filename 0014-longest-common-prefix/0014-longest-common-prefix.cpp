class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string ans = "";
        int p = 0;
        int minlen = 200;
        for (int i = 0; i < s.size(); ++i) {
            minlen = min((int)s[i].length(), minlen);
        }
        for (int p = 0; p < minlen; ++p) {
            bool same = true;
            for (int j = 1; j < s.size(); ++j) {
                if (s[j][p] != s[j - 1][p]) {
                    same = false;
                    break;
                }
            }
            if (same == true)
                ans.push_back(s[0][p]);
                else break;
        }
    return ans;}
};