class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(begin(nums1), end(nums1));
        sort(begin(nums2), end(nums2));
        vector<int> ans(nums1.size());
        auto newEnd {set_intersection(begin(nums1), end(nums1), begin(nums2), end(nums2), begin(ans))};
        newEnd = unique(begin(ans), newEnd);
        return vector<int>(begin(ans), newEnd);
    }
};