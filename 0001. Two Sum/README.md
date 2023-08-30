# Problem Difficulty
Easy

# Problem Description
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. You may assume that each input would have exactly one solution, and you may not use the same element twice. You can return the answer in any order.

 
Example 1:
```
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
```

Example 2:
```
Input: nums = [3,2,4], target = 6
Output: [1,2]
```

Example 3:
```
Input: nums = [3,3], target = 6
Output: [0,1]
 ```

Constraints:
- `2 <= nums.length <= 10^4`
- `-10^9 <= nums[i] <= 10^9`
- `-10^9 <= target <= 10^9`
- Only one valid answer exists.
 

Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?

# My Solution
## Intuition
The intuition behind this solution is to find two numbers in the given `nums` array that sum up to the given `target` value.

## Approach
The approach to solving this problem involves a brute-force technique using two nested loops. The outer loop iterates through each element in the `nums` array, and the inner loop also iterates through each element in the `nums` array. For each pair of indices `(i, j)` where `i != j`, it checks if the sum of the numbers at those indices equals the `target`. If a matching pair is found, it immediately returns the indices of the two numbers.

## Complexity
- Time Complexity: O(n^2)
- Space Complexity: O(1)

## Code
```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (i != j) {
                    if (nums[i] + nums[j] == target) {
                        return {i, j};
                    }
                }
            }
        }
        return {0}; // Placeholder return value, should not occur in valid solution
    }
};
```
