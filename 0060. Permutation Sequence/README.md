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
## Intuition
The intuition behind this solution is to find the kth permutation of a sequence of numbers from 1 to n.

## Approach
The approach to solving this problem involves calculating the factorial of a given number `n` using the `factorial` function. This factorial value is used to determine the number of permutations possible for each position in the resulting string. The algorithm iterates through the numbers from 1 to `n` and constructs the initial string `arr` with all the numbers. It then constructs the resulting string `result` by selecting digits from `arr` based on the value of `k`. At each step, the digit at the current position is determined using the `k` value divided by `(n-1)!`, and the appropriate digit is appended to the `result` string. The selected digit is then removed from the `arr`, and the `k` value is updated. The process continues until all positions are filled, and the resulting string is the kth permutation.

## Complexity
- Time complexity: **O(n^2)**  
- Space complexity: **O(n)**  

## Code
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
