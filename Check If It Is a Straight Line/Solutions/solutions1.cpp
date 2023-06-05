class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        size_t s {coordinates.size()};
        
        const int x {coordinates[0][0] - coordinates[1][0]};
        const int y {coordinates[0][1] - coordinates[1][1]};

        for(int i{2}; i < s; ++i){
            if( y * (coordinates[0][0] - coordinates[i][0]) != 
                x * (coordinates[0][1] - coordinates[i][1])){
                return false;
            }
        }
        return true;
    }
};