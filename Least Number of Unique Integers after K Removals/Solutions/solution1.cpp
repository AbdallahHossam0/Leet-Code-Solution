class Solution {
public:
    vector<pair<int, int>> sortMapByValue(unordered_map<int, int>& mapToSort) {
    vector<pair<int, int>> sortedPairs;
    for (const auto& pair : mapToSort) {
        sortedPairs.emplace_back(pair);
    }
    std::sort(sortedPairs.begin(), sortedPairs.end(), [](const auto& lhs, const auto& rhs) {
        return lhs.second < rhs.second;
    });
    return sortedPairs;
}

    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        
        unordered_map<int, int> m;

        for(const auto& elem : arr){
            m[elem]++;
        }


        vector<pair<int, int>> v{sortMapByValue(m)};


        for(auto& p : v){
            if(k > 0){
                k -= p.second;
                if(k < 0){
                    p.second = -k;
                }
                else{
                    p.second = 0;
                }
            }
            else{
                break;
            }
        }
        int ans{};
        for(const auto & p : v){
            if(p.second > 0){
                ans++;
            }
        }
        
        return ans;
    }
};