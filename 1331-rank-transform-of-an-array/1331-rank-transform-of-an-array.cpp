class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if (arr.size() == 0) {
            return arr;
        }
        vector<int> nums(arr);
        unordered_map<int, int> rank;

        sort(arr.begin(), arr.end());

        int cnt = 1;
        rank[arr[0]] = 1;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > arr[i - 1]) {
                cnt++;
            }
            rank[arr[i]] = cnt;
        }
        for (int i = 0; i < arr.size(); i++) {
            nums[i] = rank[nums[i]];
        }
        return nums;
    }
};
