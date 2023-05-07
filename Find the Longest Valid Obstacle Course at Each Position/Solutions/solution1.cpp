class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
        size_t size {obstacles.size()};
        vector<int> ans(size);
        vector<int> temp;   
        // making the first element
        ans[0]=1;
        temp.push_back(obstacles[0]);

        for(int i{1}; i < size; ++i){          
            if(obstacles[i] >= temp.back()){
                temp.push_back(obstacles[i]);
                ans[i] = temp.size();
            }
            else {
                // get the index of what should we put in the array
                long index {upper_bound(temp.begin(),temp.end(),obstacles[i]) - temp.begin()};    
                temp[index] = obstacles[i];  
                ans[i] = index + 1; 
            }
            
        }
        return ans;
    }
};