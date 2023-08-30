# Problem Difficulty
Easy

# Problem Description
Given an integer `num`, return the number of steps to reduce it to zero.

In one step, if the current number is even, you have to divide it by `2`, otherwise, you have to subtract `1` from it.

 

Example 1:
```
Input: num = 14
Output: 6
Explanation: 
Step 1) 14 is even; divide by 2 and obtain 7. 
Step 2) 7 is odd; subtract 1 and obtain 6.
Step 3) 6 is even; divide by 2 and obtain 3. 
Step 4) 3 is odd; subtract 1 and obtain 2. 
Step 5) 2 is even; divide by 2 and obtain 1. 
Step 6) 1 is odd; subtract 1 and obtain 0.
```
Example 2:
```
Input: num = 8
Output: 4
Explanation: 
Step 1) 8 is even; divide by 2 and obtain 4. 
Step 2) 4 is even; divide by 2 and obtain 2. 
Step 3) 2 is even; divide by 2 and obtain 1. 
Step 4) 1 is odd; subtract 1 and obtain 0.
```
Example 3:
```
Input: num = 123
Output: 12
 ```

Constraints:
- `0 <= num <= 10^6`

# My Solution
## Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
The intuition behind this solution is to iteratively reduce the given number to zero by performing two types of operations:

- If the number is odd, subtract 1 from it.
- If the number is even, perform a right shift operation by 1 bit.

The goal is to determine the minimum number of steps needed to reach zero using these two types of operations.

## Approach
<!-- Describe your approach to solving the problem. -->
The approach involves using a loop to repeatedly apply the operations while keeping track of the count of steps taken. The loop continues until the given number becomes zero.

- Initialize a variable count to keep track of the number of steps taken.
- Use a while loop that runs as long as the given num is not zero:
    - If num is odd (i.e., num % 2 is non-zero), subtract 1 from it (num = num - 1).
    - Otherwise, if num is even, perform a right shift operation by 1 bit (num = num >> 1).
    - Increment the count for each operation performed.
- Return the count as the result.
## Complexity
- Time complexity:O(log₂(num))
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: O(1)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

## Code
```
class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        while(num) {
            if(num % 2) {
                num = num - 1;
            }
            else {
                num = num >> 1;
            }  
            count++;
        }
        return count;
    }
};
```
