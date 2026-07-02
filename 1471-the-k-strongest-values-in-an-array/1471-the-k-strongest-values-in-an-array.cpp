class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        vector<int> ans;
        sort(arr.begin(), arr.end());
        int m = arr[(arr.size() - 1) / 2];
        int l = 0;
        int r = arr.size() - 1;

        while (l <= r && ans.size() < k) {

            if (abs(arr[l] - m) > abs(arr[r] - m)) {
                ans.push_back(arr[l]);
                l++;
            }

            else if (abs(arr[l] - m) < abs(arr[r] - m)) {
                ans.push_back(arr[r]);
                r--;
            } else {
                ans.push_back(arr[r]);
               r--;
            }
        }
        return ans;
    }
};