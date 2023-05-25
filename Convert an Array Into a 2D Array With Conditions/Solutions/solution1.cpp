class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto num: nums){
            mp[num]++;
        }
        int max{};
        for(auto m : mp){
            if(m.second > max){
                max = m.second;
            }
        }
        int i;
        vector<int> in;
        vector<vector<int>> out(max, in);
        for(auto num:nums){
            i = 0;
            while(mp[num] != 0){
                --mp[num];
                out[i].push_back(num);
                ++i;
            }
        }
        return out;
    }
};