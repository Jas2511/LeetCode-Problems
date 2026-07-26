class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int pmax1 = INT_MIN;
        int pmax2 = INT_MIN;
        int pmax3 = INT_MIN;
        int nmax1 = INT_MAX;
        int nmax2 = INT_MAX;
        int nmax3 = INT_MAX;

        for (int x : nums) {

            nmax3 = min(nmax3, max(nmax2, x));
            nmax2 = min(nmax2, max(nmax1, x));
            nmax1 = min(nmax1, x);

            pmax3 = max(pmax3, min(x, pmax2));
            pmax2 = max(pmax2, min(x, pmax1));
            pmax1 = max(pmax1, x);
        }

        return max(pmax1 * pmax2 * pmax3, nmax1 * nmax2 * pmax1);
    }
};