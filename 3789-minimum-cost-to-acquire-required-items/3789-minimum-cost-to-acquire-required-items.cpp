class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1,
                          int need2) {
        long long ans = 0;
        if (costBoth <= cost1 && costBoth <= cost2) {
            ans = 1LL * costBoth * max(need1, need2);
        }
        if (cost1 < costBoth && cost2 >= costBoth) {

            if (need1 < need2) {
                ans = 1LL * need2 * costBoth;
            } else {
                ans = 1LL * costBoth * need2 + 1LL * (need1 - need2) * cost1;
            }
        }

        if (cost1 >= costBoth && cost2 < costBoth) {
            if (need1 > need2) {
                ans = 1LL * need1 * costBoth;
            } else {
                ans = 1LL * costBoth * need1 + 1LL * (need2 - need1) * cost2;
            }
        }
        if (cost1 < costBoth && cost2 < costBoth) {
            if (need1 > need2) {
                ans = min(1LL * costBoth * need2 + 1LL*(need1 - need2) * cost1,
                          1LL * need1 * cost1 + 1LL * need2 * cost2);
            } else {
                ans =
                    min(1LL * costBoth * need1 + 1LL * (need2 - need1) * cost2,
                        1LL * need1 * cost1 + 1LL * need2 * cost2);
            }
        }
        return ans;
    }
};