class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l {};
        int r {static_cast<int>(numbers.size()) - 1};
        int sum{};
        vector<int> ans;
        while(r > l){
            sum = numbers.at(r) + numbers.at(l);
            if(sum == target){
                ans.push_back(++l);
                ans.push_back(++r);
                return ans;
            }
            if(sum > target)
                r--;
            else
                l++;

        }
        return ans;
    }
};