class Solution {
public:
    int xorOperation(int n, int start) {
        int nums[n], res = 0;
        for(int i = 0; i < n; i++) {
            nums[i] = start + 2 * i;
        }
        for(int i = 0; i < n; i++) {
            res = res ^ nums[i];
        }

        return res;
    }
};
