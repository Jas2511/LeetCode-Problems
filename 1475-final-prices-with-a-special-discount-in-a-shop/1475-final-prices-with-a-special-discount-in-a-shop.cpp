class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {

        for (int i = 0; i < prices.size()-1; i++) {

            int r = i + 1;
            while (r < prices.size()) {
                if (prices[r] <= prices[i]) {
                    prices[i] = prices[i] - prices[r];
                    break;
                }
                r++;
                
            }
        }
        return prices;
    }
};