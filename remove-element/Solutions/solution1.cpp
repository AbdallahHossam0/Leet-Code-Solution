#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
    size_t _size{nums.size()};
    int k{};
    size_t temp{_size - 1};
    for(int i {}; i < _size; i++){
        if(val == nums[i]){
            for(temp; temp > i; temp--){
                if (nums[temp] != val){
                    k++;
                    break;
                }
            }
            nums[i] = nums[temp];
            nums[temp] = val;
        }
        else{
            k++;
        }
    }
    return k;
}

int main(void)
{
    vector x{0,1,2,2,3,0,4,2};
    int k{removeElement(x, 2)};

    for (unsigned long i{}; i < x.size(); ++i)
    {
        cout << "x[" << i << "] = " << x[i] << endl;
    }
    cout << k << endl;
}