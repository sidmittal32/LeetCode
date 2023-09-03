# Problem Difficulty
Easy

# Problem Description
Given a positive integer `n`, return the smallest positive integer that is a multiple of both `2` and `n`.
 
Example 1:
```
Input: n = 5
Output: 10
Explanation: The smallest multiple of both 5 and 2 is 10.
```
Example 2:
```
Input: n = 6
Output: 6
Explanation: The smallest multiple of both 6 and 2 is 6. Note that a number is a multiple of itself.
```

Constraints:
- `1 <= n <= 150`

# My Solution
## Intuition
The intuition behind this solution is to find the smallest positive integer that is both a multiple of `2` and `n`.

## Approach
The approach to solving this problem involves the following steps:
1. Initialize a variable `result` to `2 * n` because the smallest positive integer that is a multiple of both `2` and `n` is at least `2 * n`.
2. Starting from `2 * n`, iterate downwards to `n` to find the smallest multiple of `n` that is also even.
3. In each iteration, check if the current number `i` is both even (i.e., `i % 2 == 0`) and a multiple of `n` (i.e., `i % n == 0`).
4. If `i` satisfies both conditions, update the `result` to `i` and break out of the loop.
5. Return the `result` as the smallest positive integer that is both a multiple of `2` and `n`.

## Complexity
- Time complexity: **O(n)**

- Space complexity: **O(1)**

## Code
```cpp
class Solution {
public:
    int smallestEvenMultiple(int n) {
        int result = n * 2;
        for (int i = result; i >= n; i--) {
            if (i % 2 == 0 && i % n == 0) {
                result = i;
            }
        }
        return result;
    }
};
```
