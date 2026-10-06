class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int score = 0;
        for (char c : s) {
            if (!st.empty() && st.top() == '(' && c == ')') {
                st.pop();
            } else
                st.push(c);
        }
        while (!st.empty()) {
            score++;
            st.pop();
        }

        return score;
    }
};