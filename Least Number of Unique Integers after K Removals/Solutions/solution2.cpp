class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        
        unordered_map<int, int> m;

        for(const auto& elem : arr){
            m[elem]++;
        }
        
        int x = 1;

        while(k){
            for(auto& p : m){
                if(p.second == x){
                    if(x < k){
                        p.second -= x;
                        k -= x;
                        cout << p.first << " is removed " << x << " times." << endl;
                    }
                    else{
                        p.second -= k;
                        k = 0;
                        cout << p.first << " is removed " << x << " times" << endl;
                        break;
                    }
                    cout << "k = " << k << endl;
                    if(k == 0){
                        break;
                    }
                }
            }
            x++;
        }
        int ans{};
        for(const auto & p : m){
            if(p.second > 0){
                ans++;
                cout << p.first << " " << p.second << endl;
            }
        }

        return ans;
    }
};