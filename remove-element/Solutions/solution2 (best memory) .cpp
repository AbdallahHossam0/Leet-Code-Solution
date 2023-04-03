class Solution {
public:


int removeElement(vector<int> &nums, int val)
{
    size_t _size{nums.size()};
    int k{};
    for(int i{}; i < _size; ++i){
        if(nums[i] != val){
            nums[k++] = nums[i];
        }
    }
    return k;
}

};