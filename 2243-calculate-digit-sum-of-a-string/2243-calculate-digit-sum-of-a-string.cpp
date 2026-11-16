class Solution {
public:
    string digitSum(string s, int k) {
        int n = s.length();
        while (n > k) {

            string ans = "";
            int sum = 0;
            for (int i = 0; i < n; ++i) {
                sum += s[i] - '0';
                if ((i + 1) % k == 0 || i == n - 1) {
                    ans += to_string(sum);
                    sum = 0;
                }
            }
            s = ans;
            n = s.length();
        }
        return s;
    }
};