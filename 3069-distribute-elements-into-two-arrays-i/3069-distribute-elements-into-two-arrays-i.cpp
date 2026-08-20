class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        int last1 = 0;
        int last2 = 0;
        for (int i = 2; i < nums.size(); ++i) {
            if (arr1[last1] > arr2[last2]) {
                arr1.push_back(nums[i]);
                last1++;
            } else {
                arr2.push_back(nums[i]);
                last2++;
            }
        }
        arr1.insert(arr1.end(), arr2.begin(), arr2.end());
        return arr1;
    }
};