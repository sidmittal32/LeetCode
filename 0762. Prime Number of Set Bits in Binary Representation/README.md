# Problem Difficulty
Easy

# Problem Description
Given two integers `left` and `right`, return the count of numbers in the inclusive range `[left, right]` having a prime number of set bits in their binary representation.

Recall that the number of set bits an integer has is the number of `1`'s present when written in binary.

- For example, `21` written in binary is `10101`, which has `3` set bits.
 
Example 1:
```
Input: left = 6, right = 10
Output: 4
Explanation:
6  -> 110 (2 set bits, 2 is prime)
7  -> 111 (3 set bits, 3 is prime)
8  -> 1000 (1 set bit, 1 is not prime)
9  -> 1001 (2 set bits, 2 is prime)
10 -> 1010 (2 set bits, 2 is prime)
4 numbers have a prime number of set bits.
```
Example 2:
```
Input: left = 10, right = 15
Output: 5
Explanation:
10 -> 1010 (2 set bits, 2 is prime)
11 -> 1011 (3 set bits, 3 is prime)
12 -> 1100 (2 set bits, 2 is prime)
13 -> 1101 (3 set bits, 3 is prime)
14 -> 1110 (3 set bits, 3 is prime)
15 -> 1111 (4 set bits, 4 is not prime)
5 numbers have a prime number of set bits.
```

Constraints:
- `1 <= left <= right <= 10^6`
- `0 <= right - left <= 10^4`

# My Solution
## Intuition
The intuition behind this solution is to check whether the number of set bits in the binary representation of each integer in the range `[left, right]` is a prime number.

## Approach
The approach to solving this problem involves the following steps:
1. Implement a primality test function `primalityTest` to check if a given integer is prime. This function handles edge cases and uses a basic prime-checking algorithm.
2. Implement a function `countSetBits` to count the number of set bits (1's) in the binary representation of an integer. It uses bitwise operations to calculate the count efficiently.
3. Initialize a counter `count` to keep track of the count of integers with a prime number of set bits.
4. Iterate through the integers in the range `[left, right]` (inclusive).
   - For each integer `i`, calculate the count of set bits using the `countSetBits` function.
   - Check if the count of set bits is a prime number using the `primalityTest` function.
   - If it is prime, increment the `count` variable.
5. Return the final count, which represents the number of integers in the range `[left, right]` with a prime number of set bits in their binary representation.

## Complexity
- Time complexity: **O(n * log(log(n)))**

- Space complexity: **O(1)**

## Code
```cpp
class Solution {
public:
    bool primalityTest(int n) {
        if (n == 1) return false;
        if (n == 2 || n == 3) return true;
        if (n % 2 == 0 || n % 3 == 0) return false;
        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        }
        return true;
    }

    int countSetBits(int n) {
        int result = 0;
        while (n > 0) {
            n = n & (n - 1);
            result++;
        }
        return result;
    }

    int countPrimeSetBits(int left, int right) {
        int count = 0;
        for (int i = left; i <= right; i++) {
            if (primalityTest(countSetBits(i))) {
                count++;
            }
        }
        return count;
    }
};
```
