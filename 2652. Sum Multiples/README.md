# Problem Difficulty
Easy

# Problem Description
Given a positive integer `n`, find the sum of all integers in the range `[1, n]` inclusive that are divisible by `3`, `5`, or `7`.

Return an integer denoting the sum of all numbers in the given range satisfying the constraint.

Example 1:
```
Input: n = 7
Output: 21
Explanation: Numbers in the range [1, 7] that are divisible by 3, 5, or 7 are 3, 5, 6, 7. The sum of these numbers is 21.
```
Example 2:
```
Input: n = 10
Output: 40
Explanation: Numbers in the range [1, 10] that are divisible by 3, 5, or 7 are 3, 5, 6, 7, 9, 10. The sum of these numbers is 40.
```
Example 3:
```
Input: n = 9
Output: 30
Explanation: Numbers in the range [1, 9] that are divisible by 3, 5, or 7 are 3, 5, 6, 7, 9. The sum of these numbers is 30.
``` 

Constraints:
- `1 <= n <= 10^3`

# My Solution
## Intuition
The intuition behind this solution is to iterate through all positive integers in the range `[1, n]` and check if each integer is divisible by `3`, `5`, or `7`. If an integer satisfies any of these conditions, it is added to the sum of such numbers.

#3 Approach
The approach to solving this problem involves the following steps:
1. Initialize a variable `sum` to `0` to keep track of the sum of integers that meet the conditions.
2. Iterate through all positive integers from `1` to `n`.
3. For each integer `i`, check if it is divisible by `3`, `5`, or `7` using the modulo operator (`%`).
4. If `i` is divisible by any of these numbers, add it to the `sum`.
5. Continue this process for all integers in the range `[1, n]`.
6. After iterating through all integers, return the `sum` as the result, which represents the sum of integers divisible by `3`, `5`, or `7` in the given range.

## Complexity
- Time complexity: **O(n)**

- Space complexity: **O(1)**

## Code
```cpp
class Solution {
public:
    int sumOfMultiples(int n) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
                sum += i;
            }
        }
        return sum;
    }
};
```
