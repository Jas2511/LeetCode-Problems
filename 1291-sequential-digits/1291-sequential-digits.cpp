class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        int llow = low;
        int hhigh = high;
        int sd = 0;
        int h = 0;
        while (llow != 0 && hhigh != 0) {
            if (llow != 0) {
                sd++;
                llow = llow / 10;
            }
            if (hhigh != 0) {
                h++;
                hhigh = hhigh / 10;
            }
        }
        string s = "123456789";
        int l = 0;

        for (int r = sd - 1; r < s.length() && r > l; r++) {
            int num = stoi(s.substr(l, r - l + 1));
            int j = r;
            while (j < s.length()) {
                num = stoi(s.substr(l, j - l + 1));
                if (num <= high && num >= low) {
                    ans.push_back(num);
                }

                j++;
            }
            l++;
        }
sort(ans.begin(), ans.end());
        return ans;
    }
};