class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int h = nums.size() - 1;
        int ans = 0;

        if (target > nums[h]) {
            return h + 1;
        }
        while (l <= h) {
            int mid = l + (h - l) / 2;
            if (target == nums[mid]) {
                return mid;
            }
            if (target < nums[mid]) {
                h = mid - 1;
            }
            if (target > nums[mid]) {
                l = mid + 1;
            }

            else
                ans = mid;
        }
        return ans;
    }
};