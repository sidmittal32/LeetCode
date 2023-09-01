class Solution {
public:
    int minOperations(int n) {
        int arr[n];
        for (int i = 0; i < n; i++) {
            arr[i] = (2 * i) + 1;
        }
        int count = 0;
        if (n % 2 != 0) {
            for (int i = (n / 2) + 1; i < n; i++) {
                while (arr[i] != arr[n / 2]) {
                    arr[i]--;
                    count++;
                }
            }
        }
        if (n % 2 == 0) {
            for (int i = n / 2; i < n; i++) {
                while (arr[i] != arr[(n / 2) - 1] + 1) {
                    arr[i]--;
                    count++;
                }
            }
        }
        return count;
    }
};
