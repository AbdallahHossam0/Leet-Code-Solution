class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        sort(logs.begin(),logs.end());
        vector<int> ans(k);
        int count{} , t{};
        for(int i{}; i < logs.size() -1; ++i)
        {
            count=1;
            if(logs[i][0] == logs[i+1][0])
            {
                while(logs[i][0] == logs[i+1][0])
                {
                    if(logs[i][1] != logs[i+1][1])
                    {
                        ++count;
                    }
                    ++i;
                    if(i+1 == logs.size())
                    {
                        break;
                    }
                }
                ++ans[count - 1];
            }
            else
            {
                ++ans[count - 1];
            }
        }
        if(logs.size()==1 || logs[logs.size()-1][0]!=logs[logs.size()-2][0])
        {
            ++ans[0];
        }
        return ans;
    }
};