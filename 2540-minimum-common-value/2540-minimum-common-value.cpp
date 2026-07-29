class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int ans = -1;
        int l = 0;
        int r = 0;
        while (r < nums2.size() && l < nums1.size()) {
            if (nums1[l] < nums2[r])
                l++;
            else if (nums1[l] > nums2[r])
                r++;
            else {
                ans = nums1[l];
                break;
            }
        }
        return ans;
    }
};