class Solution {
public:
    int minFlips(int a, int b, int c) {
        int n = (a | b) ^ c, m = a & b & ((a | b) ^ c), result1 = 0, result2 = 0;
        while(n > 0) {
            n = n & (n - 1);
            result1++;
        }
        while(m > 0) {
            m = m & (m - 1);
            result2++;
        }
        return result1 + result2;
    }
};
