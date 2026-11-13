class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;
        string ans = "";
        for (int i = 0; i < s.length(); ++i) {
            st.push(s[i]);
            if (st.top() == ')') {
                string temp = "";
                st.pop();
                while (!st.empty() && st.top() != '(') {
                    temp.push_back(st.top());
                    st.pop();
                }
                st.pop();
                for (char c : temp) {
                    st.push(c);
                }
            }
        }
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};