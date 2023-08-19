# Problem Difficulty
Hard

# Problem Description
The set `[1, 2, 3, ..., n]` contains a total of `n!` unique permutations.

By listing and labeling all of the permutations in order, we get the following sequence for `n = 3`:
1. `"123"`
2. `"132"`
3. `"213"`
4. `"231"`
5. `"312"`
6. `"321"`
Given `n` and `k`, return the `kth` permutation sequence.

 

Example 1:
```
Input: n = 3, k = 3
Output: "213"
```
Example 2:
```
Input: n = 4, k = 9
Output: "2314"
```
Example 3:
```
Input: n = 3, k = 1
Output: "123"
 ```

Constraints:
- `1 <= n <= 9`
- `1 <= k <= n!`

# My Solution

```cpp
class Solution {
public:
    int factorial(const int n) {
        int f = 1;
        for (int i = 1; i <= n; ++i)
            f *= i;
        return f;
    }

    string getPermutation(int n, int k) {
        string arr = "";
        for (int i = 1; i <= n; i++) {
            arr += to_string(i);
        }

        string result = ""; 
        k--; 
        while (n) {
            int f = factorial(n - 1);
            int index = k / f;
            result += arr[index];
            arr.erase(arr.begin() + index);
            k %= f;
            n--;
        }

        return result;
    }
};

```
