class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        copy (begin(nums2), begin(nums2) + n, begin(nums1) + m);
    
        inplace_merge(begin(nums1), begin(nums1) + m , end(nums1));
    }
};