# Problem Difficulty
Medium

# Problem Description
There are `n` friends that are playing a game. The friends are sitting in a circle and are numbered from `1` to `n` in clockwise order. More formally, moving clockwise from the `ith` friend brings you to the `(i+1)th` friend for `1 <= i < n`, and moving clockwise from the `nth` friend brings you to the `1st` friend.

The rules of the game are as follows:
1. Start at the `1st` friend.
2. Count the next `k` friends in the clockwise direction including the friend you started at. The counting wraps around the circle and may count some friends more than once.
3. The last friend you counted leaves the circle and loses the game.
4. If there is still more than one friend in the circle, go back to step `2` starting from the friend immediately clockwise of the friend who just lost and repeat.
5. Else, the last friend in the circle wins the game.
Given the number of friends, `n`, and an integer `k`, return the winner of the game.

Example 1:
```
Input: n = 5, k = 2
Output: 3
Explanation: Here are the steps of the game:
1) Start at friend 1.
2) Count 2 friends clockwise, which are friends 1 and 2.
3) Friend 2 leaves the circle. Next start is friend 3.
4) Count 2 friends clockwise, which are friends 3 and 4.
5) Friend 4 leaves the circle. Next start is friend 5.
6) Count 2 friends clockwise, which are friends 5 and 1.
7) Friend 1 leaves the circle. Next start is friend 3.
8) Count 2 friends clockwise, which are friends 3 and 5.
9) Friend 5 leaves the circle. Only friend 3 is left, so they are the winner.
```
Example 2:
```
Input: n = 6, k = 5
Output: 1
Explanation: The friends leave in this order: 5, 4, 6, 2, 3. The winner is friend 1.
```

Constraints:
- `1 <= k <= n <= 500`

# My Solution
## Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
This is the [Josephus Problem](https://en.wikipedia.org/wiki/Josephus_problem).

## Approach
<!-- Describe your approach to solving the problem. -->
This implementation follows the recursive structure you described and the problem's requirements. It calculates the winner's position using the Josephus formula (jos(n – 1, k) + k) % n. The base case is when there's only one person left (n == 1), and in that case, the function returns 0 as the winner's position. But as this problem is in starts from we increment the result by 1.

Given the number of friends n and the integer k, you can use this function to find the winner of the game. The approach utilizes the Josephus problem's recursive pattern to determine the position of the winner.
## Complexity
- Time complexity: O(n)
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: O(n)
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

## Code
```
class Solution {
public:
    int jos(int n, int k) {
        if(n == 1)
            return 0;
        else
            return (jos(n - 1, k) + k) % n;
    }

    int findTheWinner(int n, int k) {
        return jos(n, k) + 1;
    }
};
```
