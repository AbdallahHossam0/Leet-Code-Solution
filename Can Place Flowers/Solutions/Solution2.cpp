class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        if(!n) return true;

        size_t vecSize{flowerbed.size()};

        size_t flowers{};

        for(int i{}; i < vecSize; ++i){
            if(flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == vecSize - 1 || flowerbed[i + 1] == 0)){
                flowers++;
                flowerbed[i]++;
            }
            if(flowers > n){
                return true;
            }
        }

        if(flowers < n){
            return false;
        }
        else{
            return true;
        }


    }
};