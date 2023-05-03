class Solution {
public
    vectorvectorint findDifference(vectorint& nums1, vectorint& nums2) {
        unordered_map int, pairint, int map;
        size_t size{max(nums1.size(), nums2.size())};
        size_t size1{nums1.size()}, size2{nums2.size()};
        vectorvectorint ans;
        vectorint vec1;
        vectorint vec2;
        for(int i{}; i  size; ++i){
            if(i  size1){
                map[nums1[i]].first++;
            }
            if(i  size2){
                map[nums2[i]].second++;
            }
        }
        for(auto it{begin(map)}; it != end(map); ++it){
            if(it-second.first == 0){
                vec2.push_back(it - first);
            }
            if(it-second.second == 0){
                vec1.push_back(it - first);
            }
        }
        ans.push_back(vec1);
        ans.push_back(vec2);
        return ans;
    }
};