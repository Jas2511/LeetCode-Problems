class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() < t.length()) {
            return false;
        }

        map<int, int> freq;
        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
        }
        for (int i = 0; i < t.length(); i++) {
            freq[t[i] - 'a']--;
        }
        for (int i = 0; i < s.length(); i++) {
            if (freq[s[i]-'a'] != 0) {
                return false;
            }
        }

        return true;
    }
};