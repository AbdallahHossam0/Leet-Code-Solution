class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        stable_sort(nums.begin(), nums.end());
        vector<int> distincts {};
            for(auto num : nums){
                if(binary_search(distincts.begin(),distincts.end() , num)){
                    return true;
                }
                distincts.push_back(num);
            }
        return false;

    }
};