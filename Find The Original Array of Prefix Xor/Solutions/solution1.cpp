class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans(pref.size());
        ans[0] = pref[0];
        for(size_t i{1}; i < pref.size(); ++i){
            ans[i] = pref[i] ^ pref[i - 1];
        }
        return ans;
    }
};