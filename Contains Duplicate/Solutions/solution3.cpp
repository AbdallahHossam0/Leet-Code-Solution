class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        stable_sort(nums.begin(), nums.end()) ;
        auto x = adjacent_find(nums.begin(), nums.end());
        if(x == nums.end())
            return false;
        else
            return true;
    }
};