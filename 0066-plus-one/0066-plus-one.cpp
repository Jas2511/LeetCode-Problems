class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int carry = 0;
        if (n == 1) {
            if (digits[0] < 9) {
                digits[0] += 1;
                return digits;
            } else {
                digits = {1, 0};
                return digits;
            }
        }
        digits[n - 1] += 1;
        carry = digits[n - 1] / 10;
        digits[n - 1] %= 10;
        for (int i = n - 2; i >= 0; --i) {

            if (i == 0) {
                digits[i] += carry;
                if (digits[i] > 9) {
                    digits[i] = 1;
                    digits.push_back(0);
                }

                carry = 0;
            }
            if (carry > 0) {
                digits[i] += carry;
                carry = digits[i] / 10;
                digits[i] %= 10;
            } else
                return digits;
        }

        return digits;
    }
};