class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        if (n == 1) {
            return 1;
        }
        int sodd = 1;
        int seven = 2;
        int od = 1;
        int eve = 2;
        while (n > 1) {
            od += 2;
            eve += 2;
            sodd += od;
            seven += eve;
            n--;
        }

        return (seven % sodd);
    }
};