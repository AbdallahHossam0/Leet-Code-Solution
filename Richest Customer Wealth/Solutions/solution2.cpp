class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max{};
        int sum;
        for(auto& account : accounts){
            sum = 0;
            for(auto& money : account){
                sum += money;
            }
            if(sum > max){
                max = sum;
            }
        }
        return max;
    }
};

// best for runtime speed