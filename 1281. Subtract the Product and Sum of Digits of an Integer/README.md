# Problem Difficulty
Easy

# Problem Description
Given an integer number `n`, return the difference between the product of its digits and the sum of its digits.
 
Example 1:
```
Input: n = 234
Output: 15 
Explanation: 
Product of digits = 2 * 3 * 4 = 24 
Sum of digits = 2 + 3 + 4 = 9 
Result = 24 - 9 = 15
```
Example 2:
```
Input: n = 4421
Output: 21
Explanation: 
Product of digits = 4 * 4 * 2 * 1 = 32 
Sum of digits = 4 + 4 + 2 + 1 = 11 
Result = 32 - 11 = 21
 ```

Constraints:
- `1 <= n <= 10^5`

# My Solution
## Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
The intuition behind this solution is to calculate the product and sum of the digits of the given integer separately and then subtract the sum from the product.

## Approach
<!-- Describe your approach to solving the problem. -->
The approach involves iterating through each digit of the given integer `n`. In each iteration, the digit is extracted using modulo operations and then removed by performing integer division. The extracted digit is used to update both the sum and the product of the digits. After iterating through all the digits, the final result is obtained by subtracting the sum from the product.

## Complexity
- Time complexity: O(log n)
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: O(1)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

## Code
```
class Solution {
public:
    int subtractProductAndSum(int n) {
        int num = n, sum = 0, product = 1;
        while(num > 0) {
            sum = sum + (num % 10);
            product = product * (num % 10);
            num /= 10;
        }
        return product - sum;
    }
};
```
