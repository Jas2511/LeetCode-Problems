class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int level = 0;
        for (char c : s) {
            if (c == ')') {
                level--;
            }
            if (level) {
                ans += c;
            }
            if (c == '(') {
                {
                    level++;
                }
            }
        }
        return ans;
    }
};