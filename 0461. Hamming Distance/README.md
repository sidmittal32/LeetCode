# Problem Difficulty
Easy

# Problem Description
The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

Given two integers `x` and `y`, return the Hamming distance between them.

 

Example 1:
```
Input: x = 1, y = 4
Output: 2
Explanation:
1   (0 0 0 1)
4   (0 1 0 0)
       ↑   ↑
The above arrows point to positions where the corresponding bits are different.
```
Example 2:
```
Input: x = 3, y = 1
Output: 1
 ```

Constraints:
- `0 <= x, y <= 2^31 - 1`

# My Solution
## Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
If we XOR x and y the position at which corresponding bits are different are set.
## Approach
<!-- Describe your approach to solving the problem. -->
We XOR x and y and count the number of set bits to obtain the hamming distance.
## Complexity
- Time complexity: O(1)
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: O(1)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

## Code
```
class Solution {
public:
    int countSetBits(int n) {
        int res = 0;
        while(n > 0) {
            n = n & (n - 1);
            res++;
        }
        return res;
    }

    int hammingDistance(int x, int y) {
        int n = x ^ y;
        return countSetBits(n);
    }
};
```
