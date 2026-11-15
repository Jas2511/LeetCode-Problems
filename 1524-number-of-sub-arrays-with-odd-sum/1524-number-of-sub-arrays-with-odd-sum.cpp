class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int cnt = 0;
        int odd = 0;
        int even = 1;
        int sum = 0;
        int mod=1e9+7;

        for (int i = 0; i < arr.size(); ++i) {
            sum += arr[i];
            if (sum % 2 != 0) {
                cnt += even;
                odd++;
            } else {
                cnt += odd;
                even++;
            }
            cnt%=mod;
            
        }
        return cnt;
    }
};