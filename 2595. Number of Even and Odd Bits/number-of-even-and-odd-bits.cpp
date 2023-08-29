class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int> bin;

        while(n > 0) {
            bin.push_back(n % 2);
            n /= 2;
        }

        int even = 0, odd = 0;

        for(int i = 0; i < bin.size(); i++) {
            if(i % 2 == 0 && bin[i] == 1) {
                even++;
            } else if(bin[i] == 1) {
                odd++;
            }
        }

        return {even, odd};
    }
};
