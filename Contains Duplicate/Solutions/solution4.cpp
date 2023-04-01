class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if (!is_sorted(nums.begin(), nums.end()))
            stable_sort(nums.begin(), nums.end()) ;
        auto x = adjacent_find(nums.begin(), nums.end());
        if(x == nums.end())
            return false;
        else
            return true;
    }
};