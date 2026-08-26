class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.length();
        int l = 0, cnt = 0, mlen = INT_MAX;
        string mans = "";
        int r = 0;
        while (r < n && cnt < k) {
            if (s[r] == '1') {
                cnt++;
            }

            r++;
        }

        if (cnt == k) {
            while (l < r && s[l] == '0') {
                l++;
            }

            mlen = r - l;
            mans = s.substr(l, r - l);
        }
        while (r < n) {

            if (s[r] == '1') {
                cnt++;
            }

            while (l <= r && cnt > k) {

                if (s[l] == '1') {
                    cnt--;
                }
                l++;
            }
            if (cnt == k) {

                while (l <= r && s[l] == '0') {
                    l++;
                }
            }
            if (mlen > r - l + 1) {
                mans = s.substr(l, r - l + 1);
                mlen = min(mlen, r - l + 1);
            } else if (mlen == r - l + 1) {
                string x = s.substr(l, r - l + 1);
                if (x < mans) {
                    mans = x;
                }
            }
            r++;
        }
        return mans;
    }
};