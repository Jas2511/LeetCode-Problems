class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        bool odd = true, even = true;
        vector<int> ans(n, 0);
        int sodd = INT_MAX, seven = INT_MAX;
        for (int x : nums1) {
            if (x % 2 != 0)
                sodd = min(sodd, x);
            else
                seven = min(seven, x);
        }
        // for odd
        for (int i = 0; i < n; ++i) {
            if (nums1[i] % 2 == 0) {
                if (sodd != INT_MAX && nums1[i] > sodd) {
                    continue;
                } else
                    odd = false;
            }
        } // for even

        for (int i = 0; i < n; ++i) {
            if (nums1[i] % 2 != 0) {
                if (seven != INT_MAX && nums1[i] > sodd) {
                    continue;
                } else
                    even = false;
            }
        }

        return (even || odd);
    }
};