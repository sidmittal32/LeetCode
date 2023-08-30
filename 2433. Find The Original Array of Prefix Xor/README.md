# Problem Difficulty
Medium

# Problem Description
You are given an integer array `pref` of size `n`. Find and return the array `arr` of size `n` that satisfies:
- `pref[i] = arr[0] ^ arr[1] ^ ... ^ arr[i]`.
Note that `^` denotes the **bitwise-xor** operation.
It can be proven that the answer is **unique**.

Example 1:
```
Input: pref = [5,2,0,3,1]
Output: [5,7,2,3,2]
Explanation: From the array [5,7,2,3,2] we have the following:
- pref[0] = 5.
- pref[1] = 5 ^ 7 = 2.
- pref[2] = 5 ^ 7 ^ 2 = 0.
- pref[3] = 5 ^ 7 ^ 2 ^ 3 = 3.
- pref[4] = 5 ^ 7 ^ 2 ^ 3 ^ 2 = 1.
```
Example 2:
```
Input: pref = [13]
Output: [13]
Explanation: We have pref[0] = arr[0] = 13.
```

Constraints:
- `1 <= pref.length <= 10^5`
- `0 <= pref[i] <= 10^6`

# My Solution
## Intuition
The intuition behind this solution is to generate a new array where each element is the XOR of consecutive elements from the input array.

## Approach
The approach to solving this problem involves iterating through the input array and applying the XOR operation between consecutive elements. The result of each XOR operation is added to the resulting array. To initialize the resulting array, the first element from the input array is directly added to it. Then, in the loop, the XOR of the current element and the next element is calculated, and the result is pushed into the resulting array. The resulting array is then returned as the answer.

## Complexity
- Time complexity: **O(n)**  

- Space complexity: **O(n)**  

## Code
```cpp
class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> res;
        res.push_back(pref[0]);
        int result = 0;
        for (int i = 0; i < pref.size() - 1; i++) {
            result = pref[i] ^ pref[i + 1];
            res.push_back(result);
        }
        return res;
    }
};
```
