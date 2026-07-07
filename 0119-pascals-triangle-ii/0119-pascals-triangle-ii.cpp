class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> curr;
        vector<int> prev;
        while (curr.size() < rowIndex + 1) {

            int i = 0;
            curr = {1};
            while (curr.size() <= prev.size()) {

                if (curr.size() == prev.size()) {
                    curr.push_back(1);
                    break;
                }
                curr.push_back(prev[i] + prev[i + 1]);
                i++;
            }

            prev = curr;
        }

        return curr;
    }
};