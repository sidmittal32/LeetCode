# Problem Difficulty
Easy

# Problem Description
Given 3 positives numbers `a`, `b` and `c`. Return the minimum flips required in some bits of `a` and `b` to make ( `a` OR `b` == `c` ). (bitwise OR operation).
Flip operation consists of change any single bit 1 to 0 or change the bit 0 to 1 in their binary representation.

Example 1:
```
Input: a = 2, b = 6, c = 5
Output: 3
Explanation: After flips a = 1 , b = 4 , c = 5 such that (a OR b == c)
```
Example 2:
```
Input: a = 4, b = 2, c = 7
Output: 1
```
Example 3:
```
Input: a = 1, b = 2, c = 3
Output: 0
 ```

Constraints:
- `1 <= a <= 10^9`
- `1 <= b <= 10^9`
- `1 <= c <= 10^9`

# My Solution
## Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
XOR operation finds all the different bits. And then we count the set bits.

## Approach
<!-- Describe your approach to solving the problem. -->
In one case we need two flips when the bit is unset in c but set in both a and b. AND operation finds all common set bits, that is, a & b & ((a | b) ^ c) sets the common bits in a, b. Then we add the set bits of (a | b) ^ c and a & b & ((a | b) ^ c).
## Complexity
- Time complexity: O(Max(No. of set bits))
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: O(1)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

## Code
```
class Solution {
public:
    int minFlips(int a, int b, int c) {
        int n = (a | b) ^ c, m = a & b & ((a | b) ^ c), result1 = 0, result2 = 0;
        while(n > 0) {
            n = n & (n - 1);
            result1++;
        }
        while(m > 0) {
            m = m & (m - 1);
            result2++;
        }
        return result1 + result2;
    }
};
```
