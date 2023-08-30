# Problem Difficulty
Easy

# Problem Description
You are given a positive integer `n`.
Let `even` denote the number of even indices in the binary representation of `n` (0-indexed) with value `1`.
Let `odd` denote the number of odd indices in the binary representation of `n` (0-indexed) with value `1`.
Return an integer array `answer` where `answer = [even, odd]`.

Example 1:
```
Input: n = 17
Output: [2,0]
Explanation: The binary representation of 17 is 10001. 
It contains 1 on the 0th and 4th indices. 
There are 2 even and 0 odd indices.
```
Example 2:
```
Input: n = 2
Output: [0,1]
Explanation: The binary representation of 2 is 10.
It contains 1 on the 1st index. 
There are 0 even and 1 odd indices.
 ```

Constraints:
- 1 <= n <= 1000

# Solution
## Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
The intuition behind this solution is to convert the given integer `n` into its binary representation and then count the number of even and odd positions with a value of `1`.

## Approach
<!-- Describe your approach to solving the problem. -->
The approach involves two main steps:

1. Binary Conversion:
The input integer `n` is converted to its binary representation. This is done by repeatedly dividing `n` by 2 and storing the remainders in reverse order. These remainders represent the binary bits of `n`.

2. Counting Even and Odd Positions:
After obtaining the binary representation, the code iterates through each bit position and counts the number of `1` bits in even and odd positions. The position of the bits is determined by the index in the binary representation.

3. Returning the Result:
Finally, the code returns a vector containing the counts of `1` bits in even and odd positions.
## Complexity
- Time complexity: O(log n)
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: O(log n)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

## Code
```
class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int> bin;

        while(n > 0) {
            bin.push_back(n % 2);
            n /= 2;
        }

        int even = 0, odd = 0;

        for(int i = 0; i < bin.size(); i++) {
            if(i % 2 == 0 && bin[i] == 1) {
                even++;
            } else if(bin[i] == 1) {
                odd++;
            }
        }

        return {even, odd};
    }
};
```
