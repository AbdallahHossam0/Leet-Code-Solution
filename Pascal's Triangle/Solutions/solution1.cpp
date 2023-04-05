class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> outer;


        for(int i{}; i < numRows; i++){
            vector<int> inner;
            for(int j{}; j <= i; j++){
                if(!j){
                    inner.push_back(1);
                }
                else if(j == i){
                    inner.push_back(1);
                }
                else{
                    inner.push_back(outer[i - 1][j - 1] + outer[i - 1][j]);
                }

            }
            outer.push_back(inner);
        }

        return outer;

    }
};