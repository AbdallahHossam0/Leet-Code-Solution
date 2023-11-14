class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int> ans {0, 1};
        int max {1};
        int temp {1};
        if(n < 2){
            return ans[n];
        }
        for(int i{2}; i <= n; ++i){
            if(i % 2){
                temp = ans[(i >> 1)] + ans[(i >> 1) + 1];
                ans.push_back(temp);
                
            }
            else{
                temp = ans[(i >> 1)];
                ans.push_back(temp);
            }
            if(temp > max){
                max = temp;
            }
        }
        return max;
    }
};
