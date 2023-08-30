# Problem Difficulty
Easy

# Problem Description
Given an integer x, return true if x is a palindrome, and false otherwise.

 

Example 1:
```
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
```

Example 2:
```
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
```

Example 3:
```
Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
``` 

Constraints:
- `2^31 <= x <= 2^31 - 1`

# My Solution
## Intuition
The intuition behind this solution is to determine whether a given integer `x` is a palindrome or not.

## Approach
The approach to solving this problem involves reversing the digits of the given integer and checking if the reversed number is equal to the original number. This is achieved by iteratively extracting the rightmost digit of the number and constructing the reversed number in reverse order.

## Complexity
- Time complexity: **O(log n)**  
- Space complexity: **O(1)**  

## Code
```cpp
class Solution {
public:
    bool isPalindrome(int x) {
        long long palin = 0, n = x;

        while (x > 0) {
            palin = palin * 10 + x % 10;
            x = x / 10;
        }

        if (palin == n) {
            return true;
        }

        return false;
    }
};
