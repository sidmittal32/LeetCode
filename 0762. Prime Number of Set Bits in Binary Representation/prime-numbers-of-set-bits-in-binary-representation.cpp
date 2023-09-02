class Solution {
public:
    bool primalityTest(int n) {
        if (n == 1) return false;
        if (n == 2 || n == 3) return true;
        if (n % 2 == 0 || n % 3 == 0) return false;
        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        }
        return true;
    }

    int countSetBits(int n) {
        int result = 0;
        while (n > 0) {
            n = n & (n - 1);
            result++;
        }
        return result;
    }

    int countPrimeSetBits(int left, int right) {
        int count = 0;
        for (int i = left; i <= right; i++) {
            if (primalityTest(countSetBits(i))) {
                count++;
            }
        }
        return count;
    }
};
