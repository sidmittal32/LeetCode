class Solution {
public:
    int factorial(const int n) {
        int f = 1;
        for (int i = 1; i <= n; ++i)
            f *= i;
        return f;
    }

    string getPermutation(int n, int k) {
        string arr = "";
        for (int i = 1; i <= n; i++) {
            arr += to_string(i);
        }

        string result = ""; 
        k--; 
        while (n) {
            int f = factorial(n - 1);
            int index = k / f;
            result += arr[index];
            arr.erase(arr.begin() + index);
            k %= f;
            n--;
        }

        return result;
    }
};
