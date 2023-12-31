# Problem Difficulty
Easy
# Problem Description
Given two integers `num1` and `num2`, return the <b><i>sum</i></b> of the two integers.
 

Example 1:
```
Input: num1 = 12, num2 = 5
Output: 17
Explanation: num1 is 12, num2 is 5, and their sum is 12 + 5 = 17, so 17 is returned.
```
Example 2:
```
Input: num1 = -10, num2 = 4
Output: -6
Explanation: num1 + num2 = -6, so -6 is returned.
 ```

Constraints:
- `-100 <= num1, num2 <= 100`

# My Solution
## Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
The intuition behind this solution is straightforward. The goal is to calculate the sum of two given integers.

## Approach
<!-- Describe your approach to solving the problem. -->
The approach to solving this problem is quite simple. We are provided with two integers, num1 and num2, and we need to return their sum. This can be achieved by directly adding the two numbers using the + operator.
## Complexity
- Time complexity: O(1)
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: O(1)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

## Code
```
class Solution {
public:
    int sum(int num1, int num2) {
        return num1 + num2;
    }
};
```
