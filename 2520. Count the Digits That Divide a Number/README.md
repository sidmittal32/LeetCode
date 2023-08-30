# Problem Difficulty
Easy

# Problem Description
Given an integer `num`, return the number of digits in `num` that divide `num`.
An integer `val` divides `nums` if `nums % val == 0`.

Example 1:
```
Input: num = 7
Output: 1
Explanation: 7 divides itself, hence the answer is 1.
```
Example 2:
```
Input: num = 121
Output: 2
Explanation: 121 is divisible by 1, but not 2. Since 1 occurs twice as a digit, we return 2.
```
Example 3:
```
Input: num = 1248
Output: 4
Explanation: 1248 is divisible by all of its digits, hence the answer is 4.
```

Constraints:
- `1 <= num <= 10^9`
- `num` does not contain `0` as one of its digits.

# My Solution
## Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
The intuition behind this solution is to iterate through the digits of the given number `num`, and for each digit, check if it divides the original number `num`. If it does, increment a count to keep track of how many digits of `num` are divisors.

## Approach
<!-- Describe your approach to solving the problem. -->
The approach to solving this problem involves the following steps:

1. Initialize `n` with the value of `num` to preserve the original number.
2. Initialize variables `digit`, which will store each digit of the number in each iteration, and `count` to keep track of the number of digits that are divisors of the original number.
3. Use a while loop to iterate through the digits of the number:
    - Extract the rightmost digit of `n` using `n % 10` and store it in the variable `digit`.
    - Check if the original number `num` is divisible by the extracted digit digit (i.e., `num % digit == 0`). If it is, increment the `count`.
    - Perform integer division to remove the rightmost digit from `n` (i.e., `n /= 10`).
4. After the loop completes, return the `count` as the result.

## Complexity
- Time complexity: O(log n)
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: O(1)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

## Code
```
class Solution {
public:
    int countDigits(int num) {
        int n = num, digit = 0, count = 0;
        while(n > 0) {
            digit = n % 10;
            if(num % digit == 0) {
                count++;
            }
            n /= 10;
        }
        return count;
    }
};
```
