class Solution {
public:
    int minimumPushes(string word) {
        int ans = 0, i = 1, j = 0;
        vector<int> cnt(26, 0);
        for (char c : word) {
            cnt[c - 'a']++;
        }
        sort(cnt.begin(), cnt.end(), greater<int>());
        int n = 0;

        for (int x : cnt) {
            if (x > 0)
                n++;
        }
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