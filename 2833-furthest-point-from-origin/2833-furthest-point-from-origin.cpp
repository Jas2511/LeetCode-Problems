class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int ans = 0;
        int l = 0;
        int r = 0;
        int cnt = 0;
        for (char c : moves) {
            if (c == '_') {
                cnt++;
            }
            if (c == 'L') {
                l++;
            }
            if (c == 'R') {
                r++;
            }
        }
        ans = max(l + cnt, r + cnt);
        return ans - min(l, r);
    }
};