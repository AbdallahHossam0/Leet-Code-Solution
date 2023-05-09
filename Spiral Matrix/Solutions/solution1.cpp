class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int row {static_cast<int>(matrix.size())};
        int col {static_cast<int>(matrix[0].size())};
        int count {0};
        int total {row * col};
        

        int startingrow{};
        int startingcol{};
        int endingrow {row - 1};
        int endingcol {col - 1};
        
        while(count < total)
        {
            for(int i{startingcol};count < total && i <= endingcol; ++i)
            {
                ans.push_back(matrix[startingrow][i]);
                ++count;
            }
            ++startingrow;
            
            for(int i {startingrow}; count < total && i <= endingrow; ++i)
            {
                ans.push_back(matrix[i][endingcol]);
                ++count;
            }
            --endingcol;
            
            for(int i {endingcol};count < total && i >= startingcol; --i)
            {
                ans.push_back(matrix[endingrow][i]);
                ++count;
            }
            --endingrow;
            
            for(int i=endingrow; count < total && i >= startingrow; --i)
            {
                ans.push_back(matrix[i][startingcol]);
                ++count;
            }
            ++startingcol;
        }
        
        return ans;
    }
};