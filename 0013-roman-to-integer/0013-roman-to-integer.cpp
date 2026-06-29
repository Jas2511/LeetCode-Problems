class Solution {
public:
    int romanToInt(string s) {
        map<char, int> map;

        int sum = 0;
        map['I'] = 1;
        map['V'] = 5;
        map['X'] = 10;
        map['L'] = 50;
        map['C'] = 100;
        map['D'] = 500;
        map['M'] = 1000;
        for (int i = 0; i < s.length(); i++) {
            if (i + 1 < s.length() && map[s[i + 1]] > map[s[i]]) {
                sum = sum - map[s[i]];

            } else
                sum = sum + map[s[i]];
        }
        return sum;
    }
};