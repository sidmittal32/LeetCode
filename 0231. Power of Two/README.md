# Problem Difficulty
Easy

# Problem Description
Given an integer `n`, return `true` if it is a power of two. Otherwise, return `false`.
An integer `n` is a power of two, if there exists an integer `x` such that `n == 2x`.

Example 1:
```
Input: n = 1
Output: true
Explanation: 20 = 1
```
Example 2:
```
Input: n = 16
Output: true
Explanation: 24 = 16
```
Example 3:
```
Input: n = 3
Output: false
 ```

Constraints:

- `-2^31 <= n <= 2^31 - 1`

# My Solution
## Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
To check the power of two we could use bit manipulation. As, n >> 1 is equivalent to n / 2. We could use recursion to decrease time complexity.

## Approach
<!-- Describe your approach to solving the problem. -->
We can repeatedly divided n by 2 and use the base case to check if n was less than or equal to zero to return false, if n was equal to one to return true and if n wasn't a multiple of two to return false.

## Complexity
- Time complexity: O(1)
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: O(n)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

## Code
```
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)
            return false;
        if(n == 1)
            return true;
        if(n % 2 == 1)
            return false;
        return isPowerOfTwo(n >> 1);
    }
};
```
