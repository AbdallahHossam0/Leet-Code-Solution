class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        size_t s1{nums1.size()};
        size_t s2{nums2.size()};

        vector<vector<int>> ans(s1 + 1, vector<int>(s2 + 1, 0));

        for(int i{1}; i < s1 + 1; ++i){
            for(int j{1}; j < s2 + 1; ++j){
                if(nums1[i - 1] == nums2[j - 1]){
                    ans[i][j] = 1 + ans[i - 1][j - 1]; 
                }
                else{
                    ans[i][j] = (ans[i - 1][j] > ans[i][j - 1]) ? ans[i - 1][j] : ans[i][j - 1];
                }
            }
        }

        return ans[s1][s2];

    }
};