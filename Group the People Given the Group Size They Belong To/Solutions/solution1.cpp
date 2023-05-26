class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        vector<int> in;
        vector<vector<int>> out;
        for(int i{}; i < nums.size(); ++i){
            mp[nums[i]].push_back(i);
        }

        sort(nums.begin(), nums.end());
        auto last = unique(nums.begin(), nums.end());
        nums.erase(last, nums.end());

        for(int i{}; i < nums.size(); ++i){
            if(mp[nums[i]].size() == nums[i]){
                out.push_back(mp[nums[i]]);
            }
            else{
                for(int j{}; j < mp[nums[i]].size(); j += nums[i]){
                    for(int k{}; k < nums[i]; ++k){
                        in.push_back(mp[nums[i]][j + k]);
                    }
                    out.push_back(in);
                    in.clear();
                }

            }

        }
        return out;
    }
};