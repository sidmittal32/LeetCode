# Problem Difficulty
Easy

# Problem Description
There is a hidden integer array `arr` that consists of `n` non-negative integers.
It was encoded into another integer array `encoded` of length `n - 1`, such that `encoded[i] = arr[i] XOR arr[i + 1]`. For example, if `arr = [1,0,2,1]`, then `encoded = [1,2,3]`.
You are given the `encoded` array. You are also given an integer `first`, that is the first element of `arr`, i.e. `arr[0]`.
Return the original array `arr`. It can be proved that the answer exists and is unique.

Example 1:
```
Input: encoded = [1,2,3], first = 1
Output: [1,0,2,1]
Explanation: If arr = [1,0,2,1], then first = 1 and encoded = [1 XOR 0, 0 XOR 2, 2 XOR 1] = [1,2,3]
```
Example 2:
```
Input: encoded = [6,2,7,3], first = 4
Output: [4,2,0,7,4]
```

Constraints:
- `2 <= n <= 10^4`
- `encoded.length == n - 1`
- `0 <= encoded[i] <= 10^5`
- `0 <= first <= 10^5`

# My Solution
## Intuition
The intuition behind this solution is to reconstruct the original integer array `arr` from the given `encoded` array and the first element `first`.

## Approach
The approach to solving this problem involves the following steps:
1. Initialize an empty vector `arr` to store the original array.
2. Push the first element `first` into the `arr` vector as it is given.
3. Iterate through the `encoded` array, starting from the first element (index 0).
4. In each iteration, calculate the next element of `arr` by performing an XOR operation between the current element of `arr` (the last element pushed) and the corresponding element from the `encoded` array. Append this calculated value to the `arr` vector.
5. Continue this process until all elements have been decoded.
6. Return the `arr` vector, which contains the original array.

## Complexity
- Time complexity: **O(n)**  

- Space complexity: **O(n)**  

## Code
```cpp
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> arr;
        arr.push_back(first);
        for (int i = 0; i < encoded.size(); i++) {
            arr.push_back(arr[i] ^ encoded[i]);
        }
        return arr;
    }
};
```
