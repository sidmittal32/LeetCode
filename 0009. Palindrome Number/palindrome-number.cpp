class Solution {
public:
    bool isPalindrome(int x) {
        long long palin = 0, n = x;

        while(x > 0) {
            palin = palin * 10 + x % 10;
            x = x / 10;
        }

        if(palin == n) {
            return true;
        }

        return false;
    }
};
