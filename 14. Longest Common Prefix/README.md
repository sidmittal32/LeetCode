# Problem Difficulty
Easy

# Problem Description
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string `""`.

Example 1:

```
Input: strs = ["flower","flow","flight"]
Output: "fl"
```

Example 2:

```
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
```

Constraints:
- `1 <= strs.length <= 200`
- `0 <= strs[i].length <= 200`
- `strs[i]` consists of only lowercase English letters.

# My Solution

```cpp
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string common_prefix = ""; 

        sort(strs.begin(), strs.end());

        for(int i = 0; i < min(strs[0].size(), strs[strs.size() - 1].size()); i++) {
            if(strs[0][i] != strs[strs.size() - 1][i])
                return common_prefix;
            common_prefix += strs[0][i];
        }

        return common_prefix;
    }
};
```
