# Problem Difficulty
Medium

# Problem Description
Implement `pow(x, n)`, which calculates `x` raised to the power `n` (i.e., `x^n`).

Example 1:
```
Input: x = 2.00000, n = 10
Output: 1024.00000
```

Example 2:
```
Input: x = 2.10000, n = 3
Output: 9.26100
```
Example 3:
```
Input: x = 2.00000, n = -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25
```

Constraints:

- `-100.0 < x < 100.0`
- `-231 <= n <= 231-1`
- `n` is an integer.
- Either `x` is not zero or `n > 0`.
- `-104 <= xn <= 104`

# My Solution
## Intuition
The intuition behind this solution is to calculate the power of a given base `x` raised to the exponent `n`.

## Approach
The approach to solving this problem involves using a recursive function `fastPow` to calculate the power efficiently. The main function `myPow` handles the special cases where `n` is zero, negative, or the minimum possible value. In the `fastPow` function, the power is calculated recursively by using the concept that `x^n` can be computed as `(x^(n/2))^2` if `n` is even, or as `x * (x^(n/2))^2` if `n` is odd.

## Complexity
- Time complexity: **O(log n)** 
- Space complexity: **O(log n)**  

## Code
```cpp
class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0)
            return 1.0;

        if (n == -2147483648) {
            x = 1 / x;
            n = -(n + 1);
            return x * fastPow(x, n);
        }

        if (n < 0) {
            x = 1 / x;
            n = -n;
        }

        return fastPow(x, n);
    }

private:
    double fastPow(double x, int n) {
        if (n == 1)
            return x;

        double temp = fastPow(x, n / 2);
        temp = temp * temp;
        if (n % 2 == 0)
            return temp;
        else
            return temp * x;
    }
};
