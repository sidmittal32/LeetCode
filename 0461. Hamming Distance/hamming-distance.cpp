class Solution {
public:
    int countSetBits(int n) {
        int res = 0;
        while(n > 0) {
            n = n & (n - 1);
            res++;
        }
        return res;
    }

    int hammingDistance(int x, int y) {
        int n = x ^ y;
        return countSetBits(n);
    }
};
