class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int totalSum {};
        int p{}, m{}, g{};
        int count1, count2, count3;
        travel.push_back(0);
        for(size_t i{}; i < garbage.size(); p += travel[i], m += travel[i], g += travel[i], ++i){
            count1 = count(garbage[i].begin(), garbage[i].end(), 'P');
            count2 = count(garbage[i].begin(), garbage[i].end(), 'M');
            count3 = count(garbage[i].begin(), garbage[i].end(), 'G');

            if(count1){
                totalSum += count1 +  p;
                p = 0;
            }
            if(count2){
                totalSum += count2 +  m;
                m = 0;
            }
            if(count3){
                totalSum += count3 +  g;
                g = 0;
            }
        }
        return totalSum;
    }
};