class Solution {
public:
    int minimumPushes(string word) {
        int n = word.length();
        int ans = 0;
        int i = 1;
        while (n > 8) {
            ans += 8 * i;
            n -= 8;
            i++;
        }
        if (n <= 8) {
            ans += n * i;
        }
        return ans;
    }
};