# Problem Difficulty
Easy

# Problem Description
Roman numerals are represented by seven different symbols: `I`, `V`, `X`, `L`, `C`, `D` and `M`.

```
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
```

For example, `2` is written as `II` in Roman numeral, just two ones added together. `12` is written as `XII`, which is simply `X + II`. The number `27` is written as `XXVII`, which is `XX + V + II`.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not `IIII`. Instead, the number four is written as `IV`. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as `IX`. There are six instances where subtraction is used:
- `I` can be placed before `V` (5) and `X` (10) to make 4 and 9. 
- `X` can be placed before `L` (50) and `C` (100) to make 40 and 90. 
- `C` can be placed before `D` (500) and `M` (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.

Example 1:

```
Input: s = "III"
Output: 3
Explanation: III = 3.
```

Example 2:

```
Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
```

Example 3:

```
Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
```

Constraints:
- `1 <= s.length <= 15`
- `s` contains only the characters `('I', 'V', 'X', 'L', 'C', 'D', 'M')`.
- It is guaranteed that `s` is a valid roman numeral in the range `[1, 3999]`.

# My Solution
## Intuition
The intuition behind this solution is to convert a Roman numeral string into an integer.

## Approach
The approach to solving this problem involves iterating through the Roman numeral string from left to right. For each character, its corresponding integer value is obtained using a helper function `roman_to_integer`. If the current integer value is less than the integer value of the next character, it indicates subtraction should occur (e.g., "IV" for 4). Otherwise, addition is performed. The integer value is updated accordingly, and the loop continues.

## Complexity
- Time complexity: **O(n)**  
- Space complexity: **O(1)**  

## Code
```cpp
class Solution {
public:
    int roman_to_integer(char c) {
        if (c == 'I')
            return 1;
        else if (c == 'V')
            return 5;
        else if (c == 'X')
            return 10;
        else if (c == 'L')
            return 50;
        else if (c == 'C')
            return 100;
        else if (c == 'D')
            return 500;
        else if (c == 'M')
            return 1000;
        return -1;
    }

    int romanToInt(string s) {
        int integer = 0;

        for (int i = 0; i < s.length(); i++) {
            int s_1 = roman_to_integer(s[i]);

            if (i + 1 < s.length()) {
                int s_2 = roman_to_integer(s[i + 1]);

                if (s_1 >= s_2) {
                    integer += s_1;
                } else {
                    integer += s_2 - s_1;
                    i++;
                }
            } else {
                integer += s_1;
            }
        }

        return integer;
    }
};
