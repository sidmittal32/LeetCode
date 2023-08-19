class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0)
            return 1.0;
        
        if (n == -2147483648) {
            x = 1 / x;
            n = -(n + 1);
            return x * fastPow(x, n);
        }
        
        if (n < 0) {
            x = 1 / x;
            n = -n;
        }
        
        return fastPow(x, n);
    }
    
private:
    double fastPow(double x, int n) {
        if (n == 1)  
            return x;
        
        double temp = fastPow(x, n / 2);
        temp = temp * temp;
        if (n % 2 == 0)
            return temp;
        else
            return temp * x;
    }
};
