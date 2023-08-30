# Problem Difficulty
Easy

# Problem Description
Given an integer `n`, return `true` if it is a power of three. Otherwise, return `false`.
An integer `n` is a power of three, if there exists an integer `x` such that `n == 3x`.

 Example 1:
```
Input: n = 27
Output: true
Explanation: 27 = 33
```
Example 2:
```
Input: n = 0
Output: false
Explanation: There is no x where 3x = 0.
```
Example 3:
```
Input: n = -1
Output: false
Explanation: There is no x where 3x = (-1).
 ```

Constraints:
- `-2^31 <= n <= 2^31 - 1`

# My Solution
## Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
If log3(n) is an integer, then n is a power of three.

## Approach
<!-- Describe your approach to solving the problem. -->
If n <= 0, it can't be a power of three, so we return false. Calculate the log3(n) using the formula log10(n) / log10(3). This gives us a floating-point value representing the exponent required to raise 3 to in order to get n.Check if the difference between the calculated log and its rounded value is very close to 0. If the difference is smaller than 1e-10, then we can consider it as an integer and return true. Otherwise, return false.
## Complexity
- Time complexity: O(1)
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: O(1)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

## Code
```
class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0)
            return false;
        double logResult = log10(n) / log10(3);
        return fabs(logResult - round(logResult)) < 1e-10; 
    }
};
```
