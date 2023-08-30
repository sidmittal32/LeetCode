class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> res;
        res.push_back(pref[0]);
        int result = 0;
        for (int i = 0; i < pref.size() - 1; i++) {
            result = pref[i] ^ pref[i + 1];
            res.push_back(result);
        }
        return res;
    }
};
