class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {

        string ans = "";
      
        int n = s.length();
        map<string, string> mp;
        for (int i = 0; i < knowledge.size(); ++i) {
            mp[knowledge[i][0]] = knowledge[i][1];
        }
        for (int i = 0; i < n; ++i) {
            

            if (s[i] == '(') {
                string key = "";
                i++;
                while (i < n && s[i] != ')') {
                    key.push_back(s[i]);
                    i++;
                }
                if (mp.contains(key)) {
                    ans += mp[key];
                } else {
                    ans.push_back('?');
                }
            } else {
                ans.push_back(s[i]);
            }
        }

        return ans;
    }
};