class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int ans = 0;
        int cnt = 0;
        vector<int> order(cost);
        sort(order.begin(), order.end(), greater<int>());
        for (int i = 0; i < order.size(); i++) {
            cnt %= 2;
            ans += order[i];
            if (cnt == 1) {
                i++;
            }
            if (i >= order.size()) {
                break;
            }
            cnt++;
        }

        return ans;
    }
};