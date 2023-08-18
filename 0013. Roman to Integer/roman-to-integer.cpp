class Solution {
public:
    int roman_to_integer(char c) {
        if(c == 'I')
            return 1;
        else if(c == 'V')
            return 5;
        else if(c == 'X')
            return 10;
        else if(c == 'L')
            return 50;
        else if(c == 'C')
            return 100;
        else if(c == 'D')
            return 500;
        else if(c == 'M')
            return 1000;
        return -1;
    }

    int romanToInt(string s) {
        int integer = 0;

        for(int i = 0; i < s.length(); i++) {
            int s_1 = roman_to_integer(s[i]);

            if(i + 1 < s.length()) {
                int s_2 = roman_to_integer(s[i + 1]);

                if(s_1 >= s_2) {
                    integer += s_1;
                }
                else {
                    integer += s_2 - s_1;
                    i++;
                }
            }
            else {
                integer += s_1;
            }
        }

        return integer;
    }
};
