# Problem Diffulty
Easy

# Problem Description
Given an integer `n`, return `true` if it is a power of four. Otherwise, return `false`.
An integer `n` is a power of four, if there exists an integer `x` such that `n == 4x`.

Example 1:
```
Input: n = 16
Output: true
```
Example 2:
```
Input: n = 5
Output: false
```
Example 3:
```
Input: n = 1
Output: true
```

Constraints:
- `-2^31 <= n <= 2^31 - 1`

# My Solution
## Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
If log4(n) is an integer, then n is a power of three.

## Approach
<!-- Describe your approach to solving the problem. -->
If n <= 0, it can't be a power of three, so we return false. Calculate the log4(n) using the formula log10(n) / log10(4). This gives us a floating-point value representing the exponent required to raise 4 to in order to get n.Check if the difference between the calculated log and its rounded value is equal to 0. If the difference is equal to zero, then we can consider it as an integer and return true. Otherwise, return false.
## Complexity
- Time complexity: O(1)
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- Space complexity: O(1)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

## Code
```
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0)
            return false;
        double logResult = log10(n) / log10(4);
        return fabs(logResult - round(logResult)) == 0;
    }
};
```
