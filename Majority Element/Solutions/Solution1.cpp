class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> m;
        size_t n{nums.size() >> 1};

        for(const auto& num: nums){
            m[num]++;
            if(m[num] > n){
                return num;
            }
        }
        return 0;
    }
};