# Problem Difficulty
Easy

# Problem Description
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. You may assume that each input would have exactly one solution, and you may not use the same element twice. You can return the answer in any order.

 
Example 1:
```
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
```

Example 2:
```
Input: nums = [3,2,4], target = 6
Output: [1,2]
```

Example 3:
```
Input: nums = [3,3], target = 6
Output: [0,1]
 ```

Constraints:
- `2 <= nums.length <= 10^4`
- `-10^9 <= nums[i] <= 10^9`
- `-10^9 <= target <= 10^9`
- Only one valid answer exists.
 

Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?

# My Solution

```cp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++)
            for(int j = 0; j < nums.size(); j++)
                if(i != j)
                    if(nums[i] + nums[j] == target)
                        return {i, j};
        return {0};
    }
};
```

# Optimized Solution

```cp
#include <unordered_map>
 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
       
        for(int i = 0; i < nums.size(); i++){
            if(mp.find(target - nums[i]) == mp.end())
                mp[nums[i]] = i;
            else
                return {mp[target - nums[i]], i};
        }
 
        return {-1, -1};
    }
};
```

## Dry Run
Suppose we have an array nums = [2, 7, 11, 15] and a target of target = 9. We want to find two numbers in nums that add up to target. Initially, the unordered_map mp is empty. We start iterating through the array from left to right. For the first element nums[0] = 2, we check if its complement target - nums[0] = 7 exists in the map by using the find() method. Since it does not exist in the map, we add the key-value pair (2, 0) to the map. The map now looks like this: {2: 0}. For the second element nums[1] = 7, we check if its complement target - nums[1] = 2 exists in the map. Since it does exist in the map, we return the indices mp[2] = 0 and i = 1 as a vector {0, 1}. Therefore, the code returns the expected output of [0, 1], indicating that the indices of the two elements that add up to the target are 0 and 1.
