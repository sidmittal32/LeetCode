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

```cpp
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
