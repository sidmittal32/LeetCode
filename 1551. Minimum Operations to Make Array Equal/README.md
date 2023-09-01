# Problem Difficulty
Medium

# Problem Description
You have an array `arr` of length `n` where `arr[i] = (2 * i) + 1` for all valid values of `i` (i.e., `0 <= i < n`).
In one operation, you can select two indices `x` and `y` where `0 <= x, y < n` and subtract `1` from `arr[x]` and add `1` to `arr[y]` (i.e., perform `arr[x] -=1` and `arr[y] += 1`). The goal is to make all the elements of the array equal. It is guaranteed that all the elements of the array can be made equal using some operations.
Given an integer `n`, the length of the array, return the minimum number of operations needed to make all the elements of arr equal.

Example 1:
```
Input: n = 3
Output: 2
Explanation: arr = [1, 3, 5]
First operation choose x = 2 and y = 0, this leads arr to be [2, 3, 4]
In the second operation choose x = 2 and y = 0 again, thus arr = [3, 3, 3].
```
Example 2:
```
Input: n = 6
Output: 9
```

Constraints:
- `1 <= n <= 10^4`

# My Solution
## Intuition
The intuition behind this solution is to distribute the operations optimally to make all elements of the array equal. We start with an array where each element `arr[i]` is `(2 * i) + 1`. 

## Approach
The approach to solving this problem involves the following steps:
1. Initialize an array `arr` of length `n`, where each element is calculated as `(2 * i) + 1` for `0 <= i < n`. This represents the initial state of the array.
2. Initialize a variable `count` to keep track of the number of operations needed to make all elements equal.
3. Check if `n` is odd. If it is, iterate through the second half of the array (from `(n / 2) + 1` to `n - 1`).
   - In each iteration, decrement the current element `arr[i]` until it becomes equal to the element at the middle of the array `arr[n / 2]`. Increment the `count` for each decrement operation.
4. If `n` is even, iterate through the second half of the array (from `n / 2` to `n - 1`).
   - In each iteration, decrement the current element `arr[i]` until it becomes equal to the element one position before the middle of the array `arr[(n / 2) - 1]`. Increment the `count` for each decrement operation.
5. Return the final `count`, which represents the minimum number of operations needed to make all elements of the array equal.

## Complexity
- Time complexity: **O(n)**  
- Space complexity: **O(n)**  

## Code
```cpp
class Solution {
public:
    int minOperations(int n) {
        int arr[n];
        for (int i = 0; i < n; i++) {
            arr[i] = (2 * i) + 1;
        }
        int count = 0;
        if (n % 2 != 0) {
            for (int i = (n / 2) + 1; i < n; i++) {
                while (arr[i] != arr[n / 2]) {
                    arr[i]--;
                    count++;
                }
            }
        }
        if (n % 2 == 0) {
            for (int i = n / 2; i < n; i++) {
                while (arr[i] != arr[(n / 2) - 1] + 1) {
                    arr[i]--;
                    count++;
                }
            }
        }
        return count;
    }
};
