class Solution {
public:
    int numberOfSpecialChars(string word) {
        string s = word;
        int cnt = 0, n = word.length();
        vector<int> low(26, -1);
        vector<int> up(26, -1);

        for (int i = 0; i < n; i++) {
            if (isupper(s[i]) && up[s[i]-'A'] == -1) {
                up[s[i] - 'A'] = i;
            }
            if (islower(s[i])) {
                low[s[i] - 'a'] = i;
            }
        }
        for (int i = 0; i < 26; i++) {
            if (low[i] != -1 && up[i] != -1 && low[i] < up[i]) {
                cnt++;
            }
        }
        return cnt;
    }
};