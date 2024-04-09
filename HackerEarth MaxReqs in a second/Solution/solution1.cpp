// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int func(vector<int>& start, vector<int>& stop, vector<int>& reqs){
    
    int ans{};
    int sum {};
    
    auto maxElem = *max_element(begin(stop), end(stop));

    vector<int> vec(maxElem + 1, 0);
    
    for(int i{}; i < 10; ++i){
        vec[start[i]] += reqs[i];
        if(stop[i] + 1 == 10){
            continue;
        }
        vec[stop[i] + 1] -= reqs[i];
    }
    
    
    for(const auto & x: vec){
        sum += x;
        
        if(sum > ans){
            ans = sum;
        }
    }
    
    return ans;
}


int main() {
    vector<int> start{13, 22, 0, 15, 11, 9, 26, 4, 19, 2};
    vector<int> end{14, 23, 6, 18, 22, 11, 28, 7, 25, 11};
    
    vector<int> A{17, 22, 8, 4, 17, 13, 8, 14, 13, 25};
    
    cout << func(start, end, A) <<  endl;
    
    
    
    return 0;
}