class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0)
            return false;
        double logResult = log10(n) / log10(4);
        return fabs(logResult - round(logResult)) == 0;
    }
};
