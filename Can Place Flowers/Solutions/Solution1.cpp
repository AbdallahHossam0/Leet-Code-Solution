class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        size_t vecSize {flowerbed.size()};

        int flowers {};

        if(vecSize == 1){
            if((flowerbed[0] && !n) || (!flowerbed[0])){
                return true;
            }
            else{
                return false;
            }

        }

        if(!(flowerbed[0] || flowerbed[1])){
            flowerbed[0]++;
            flowers++;
        }

        for(int i{}; i < vecSize - 2; ++i){
            if(!(flowerbed[i] || flowerbed[i + 1] || flowerbed[i + 2])){
                flowers++;
                flowerbed[i + 1]++;
            }
        }

        if(!(flowerbed[vecSize - 1] || flowerbed[vecSize - 2])){
            flowerbed[vecSize - 1]++;
            flowers++;
        }


        if(n > flowers){
            return false;
        }
        else{
            return true;;
        }


    }
};