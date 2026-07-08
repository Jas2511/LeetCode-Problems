class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "";
        for (int i = 0; i < words.size(); i++) {
            int sum = 0;
            int j = 0;
            while (j < words[i].length()) {
                string s = words[i];
                sum += weights[s[j] - 'a'];
                j++;
                sum %= 26;
            }
            ans.push_back(abs('z' - sum));
        }

        return ans;
    }
};