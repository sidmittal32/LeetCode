class Solution {
public:
    int smallestEvenMultiple(int n) {
        int result = n * 2;
        for (int i = result; i >= n; i--) {
            if (i % 2 == 0 && i % n == 0) {
                result = i;
            }
        }
        return result;
    }
};
