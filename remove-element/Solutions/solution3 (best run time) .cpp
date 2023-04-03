class Solution {
public:


int removeElement(vector<int> &nums, int val)
{
    long occurances {count(nums.begin(), nums.end(), val)};
    remove(nums.begin(), nums.end(), val);
    return nums.size() - occurances;
}

};