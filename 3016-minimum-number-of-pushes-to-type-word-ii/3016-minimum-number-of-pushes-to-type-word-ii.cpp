class Solution {
public:
    int minimumPushes(string word) {
        unordered_set<char> st;
        vector<int> cnt(26, 0);
        for (char c : word) {
            st.insert(c);
        }
        int n = st.size();
        for (char c : word) {
            cnt[c - 'a']++;
        }
        int ans = 0;
        sort(cnt.begin(), cnt.end(), greater<int>());
        int i = 1;
        int j = 0;
        while (n > 8) {
            int x = 0;
            while (x < 8) {
                ans += i * cnt[j];
                x++;
                j++;
            }
            n -= 8;
            i++;
        }
        int x = 0;
        while (x < n) {
            ans += i * cnt[j];
            x++;
            j++;
        }

        return ans;
    }
};