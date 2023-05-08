class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum {};
        size_t size {mat.size()};
        for(int i{}; i < size; ++i){
            sum += mat[i][i];
            if(i != size - i -1)
                sum += mat[i][size - i - 1];
        }
        return sum;
    }
};