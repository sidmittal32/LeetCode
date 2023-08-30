# Problem Difficulty
Easy

# Problem Description
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with `O(log n)` runtime complexity.

Example 1:

```
Input: nums = [1,3,5,6], target = 5
Output: 2
```

Example 2:

```
Input: nums = [1,3,5,6], target = 2
Output: 1
```

Example 3:

```
Input: nums = [1,3,5,6], target = 7
Output: 4
```

Constraints:
- `1 <= nums.length <= 10^4`
- `-10^4 <= nums[i] <= 10^4`
- `nums` contains distinct values sorted in ascending order.
- `-10^4 <= target <= 10^4`

# My Solution
## Intuition
The intuition behind this solution is to find the position where a given target number should be inserted in a sorted vector of numbers.

## Approach
The approach to solving this problem involves iterating through the sorted vector of numbers `nums` and comparing each number with the target number. By comparing adjacent numbers, the code determines the position where the target should be inserted to maintain the sorted order. If the target is found, the corresponding index is returned. If the target is not found, the index where the target should be inserted is returned.

## Complexity
- Time complexity: **O(n)** 
- Space complexity: **O(1)**  

## Code
```cpp
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;

        for (i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == target)
                return i;
            else if (nums[i] < target && nums[i + 1] > target)
                return i + 1;
        }

        if (target > nums[i])
            return i + 1;
        if (target == nums[i])
            return i;
        return 0;
    }
};
```
