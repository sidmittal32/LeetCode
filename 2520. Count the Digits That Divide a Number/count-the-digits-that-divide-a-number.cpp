class Solution {
public:
    int countDigits(int num) {
        int n = num, digit = 0, count = 0;
        while(n > 0) {
            digit = n % 10;
            if(num % digit == 0) {
                count++;
            }
            n /= 10;
        }
        return count;
    }
};
