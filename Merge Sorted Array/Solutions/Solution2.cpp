class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		nums1.insert(begin(nums1) + m, begin(nums2), end(nums2));
		inplace_merge(begin(nums1), begin(nums1) + m , begin(nums1) + m + n);
		nums1.resize(n + m);
    }
};
	