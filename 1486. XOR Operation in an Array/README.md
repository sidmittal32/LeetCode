# Problem Difficulty
Easy

# Problem Description
You are given an integer `n` and an integer `start`.
Define an array `nums` where `nums[i] = start + 2 * i (0-indexed)` and `n == nums.length`.
Return the bitwise XOR of all elements of `nums`.

Example 1:

```
Input: n = 5, start = 0
Output: 8
Explanation: Array nums is equal to [0, 2, 4, 6, 8] where (0 ^ 2 ^ 4 ^ 6 ^ 8) = 8.
Where "^" corresponds to bitwise XOR operator.
```

Example 2:

```
Input: n = 4, start = 3
Output: 8
Explanation: Array nums is equal to [3, 5, 7, 9] where (3 ^ 5 ^ 7 ^ 9) = 8.
```

Constraints:
- `1 <= n <= 1000`
- `0 <= start <= 1000`
- `n == nums.length`

# My Solution
## Intuition
The intuition behind this solution is to compute the XOR operation on an array of numbers with a specific starting value and a common difference between elements.

## Approach
The approach to solving this problem involves generating an array of numbers based on the given `start` value and a common difference of 2. The `nums` array is constructed by iterating `n` times and calculating each element as `start + 2 * i`, where `i` is the index of the current element. After constructing the array, the XOR operation is performed on all elements in the array using a loop. The final result is the XOR value obtained.

## Complexity
- Time complexity: **O(n)**  
  The time complexity is determined by the two loops: one for constructing the `nums` array and another for performing the XOR operation. Both loops iterate `n` times.

- Space complexity: **O(n)**  
  The space complexity is determined by the space used to store the `nums` array, which contains `n` elements.

## Code
```cpp
class Solution {
public:
    int xorOperation(int n, int start) {
        int nums[n], res = 0;
        for (int i = 0; i < n; i++) {
            nums[i] = start + 2 * i;
        }
        for (int i = 0; i < n; i++) {
            res = res ^ nums[i];
        }

        return res;
    }
};
```
