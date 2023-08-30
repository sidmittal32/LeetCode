# Problem Difficulty
Easy

# Problem Description
You are given a positive integer array `nums`.
- The **element sum** is the sum of all the elements in `nums`.
- The **digit sum** is the sum of all the digits (not necessarily distinct) that appear in `nums`.
Return the **absolute** difference between the **element sum** and **digit sum** of `nums`.
**Note** that the absolute difference between two integers `x` and `y` is defined as `|x - y|`.

Example 1:
```
Input: nums = [1,15,6,3]
Output: 9
Explanation: 
The element sum of nums is 1 + 15 + 6 + 3 = 25.
The digit sum of nums is 1 + 1 + 5 + 6 + 3 = 16.
The absolute difference between the element sum and digit sum is |25 - 16| = 9.
```
Example 2:
```
Input: nums = [1,2,3,4]
Output: 0
Explanation:
The element sum of nums is 1 + 2 + 3 + 4 = 10.
The digit sum of nums is 1 + 2 + 3 + 4 = 10.
The absolute difference between the element sum and digit sum is |10 - 10| = 0.
 ```

Constraints:
- 1 <= nums.length <= 2000
- 1 <= nums[i] <= 2000

# My Solution
## Intuition
The intuition behind this solution is to calculate the difference between the sum of the elements of the array and the sum of the digits of each element.

## Approach
The approach to solving this problem involves two main steps:
1. Calculate the sum of all elements in the input array using a loop that iterates through each element and accumulates their values.
2. Calculate the sum of the digits for each element in the input array. This is achieved by iterating through each element and, for each element, extracting its digits using a loop and accumulating their values.

After calculating both sums, the absolute difference between the two sums is computed and returned as the final result.

## Complexity
- Time complexity: **O(n * d)** 

- Space complexity: **O(1)**  

## Code
```cpp
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int element_sum = 0, digit_sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            element_sum += nums[i];
        }
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            while (num > 0) {
                digit_sum += num % 10;
                num /= 10;
            }
        }
        return abs(element_sum - digit_sum);
    }
};
```
