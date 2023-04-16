class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> x {nums};
        for(auto num:nums){
            x.push_back(num);
        }
        return x;
    }
};