class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int i = 0;
        priority_queue<int> q;
        for(; i < heights.size() - 1; ++i){
            if(heights[i] >= heights[i + 1]){
                continue;
            }

            bricks -= heights[i + 1] - heights[i];
            q.push(heights[i + 1] - heights[i]);

            if(bricks < 0){
                bricks += q.top();
                q.pop();
                ladders--;
            }

            if(ladders < 0){
                return i;
            }
        }

        return i;
    }
};