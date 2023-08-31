# Problem Difficulty
Easy

# Problem Description
You are given a positive integer `arrivalTime` denoting the arrival time of a train in hours, and another positive integer `delayedTime` denoting the amount of delay in hours.
Return the time when the train will arrive at the station.
Note that the time in this problem is in 24-hours format.

Example 1:
```
Input: arrivalTime = 15, delayedTime = 5 
Output: 20 
Explanation: Arrival time of the train was 15:00 hours. It is delayed by 5 hours. Now it will reach at 15+5 = 20 (20:00 hours).
```
Example 2:
```
Input: arrivalTime = 13, delayedTime = 11
Output: 0
Explanation: Arrival time of the train was 13:00 hours. It is delayed by 11 hours. Now it will reach at 13+11=24 (Which is denoted by 00:00 in 24 hours format so return 0).
 ```

Constraints:
- `1 <= arrivaltime < 24`
- `1 <= delayedTime <= 24`

# My Solution
## Intuition
The intuition behind this solution is to calculate the time when the train will arrive at the station after accounting for the delay.

## Approach
The approach to solving this problem involves adding the `arrivalTime` and `delayedTime` to determine the new arrival time after the delay. If the sum of `arrivalTime` and `delayedTime` exceeds 23 (the maximum hour in 24-hour format), we need to subtract 24 to get the correct time within the 24-hour format.

## Complexity
- Time complexity: **O(1)**  

- Space complexity: **O(1)**  

## Code
```cpp
class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        if (arrivalTime + delayedTime > 23) {
            return (arrivalTime + delayedTime) - 24;
        }
        return arrivalTime + delayedTime;
    }
};
