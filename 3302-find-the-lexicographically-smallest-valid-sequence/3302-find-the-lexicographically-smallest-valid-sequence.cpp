class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        vector<int> right(n + 1);
        vector<int> ans;
        int j = m - 1;
        int cnt = 0;
        for (int i = n - 1; i >= 0; --i) {
            right[i] = cnt;
            if (j >= 0 && word1[i] == word2[j]) {
                cnt++;
                j--;
            }
        }
        bool used = false;
        j = 0;
        for (int i = 0; i < n && j < m; ++i) {
            if (word1[i] == word2[j]) {
                ans.push_back(i);
                j++;
            } else if (!used && right[i] >= m - 1 - j) {
                ans.push_back(i);
                j++;
                used = true;
            }
        }
        if (j == m) {
            return ans;
        }
        return vector<int>();
    }
};