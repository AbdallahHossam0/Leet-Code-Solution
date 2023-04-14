class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n == 0){
            return;
        }
        vector<int> x(n + m);
        auto it {begin(x)};
        unsigned char i {},j{};
        while(it != end(x)){
            if((i < m && j < n &&nums1[i] <= nums2[j]) || j >= n){
                *it = nums1[i++];
                

            }
            else if((j < n && i < m && nums1[i] >= nums2[j]) || i >= m){
                *it = nums2[j++];

            }
            it++;
        }
        nums1 = x;
    }
};