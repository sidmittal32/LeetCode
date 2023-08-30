class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int element_sum = 0, digit_sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            element_sum += nums[i];
        }
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            while (num > 0) {
                digit_sum += num % 10;
                num /= 10;
            }
        }
        return abs(element_sum - digit_sum);
    }
};
