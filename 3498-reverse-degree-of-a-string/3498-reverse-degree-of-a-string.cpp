class Solution {
public:
    int reverseDegree(string s) {
        int d = 0, i = 1;
       
        for (char c : s) {
            d += (abs('z' - c)+1) * i;
            i++;
        }
        return d;
    }
};