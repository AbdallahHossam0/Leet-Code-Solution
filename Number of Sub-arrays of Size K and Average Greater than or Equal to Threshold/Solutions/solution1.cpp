class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int ans{};
        threshold *= k;
        int sum{};
        int i{};

        for(; i < k; ++i){
            sum += arr.at(i);
        }

        if(sum >= threshold){
            ++ans;
        }

        for(; i < arr.size(); ++i){
            sum += arr.at(i) - arr.at(i - k);
            if(sum >= threshold){
                ++ans;
            }
        }


        return ans;
        
    }
};