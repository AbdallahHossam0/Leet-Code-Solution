class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string x;

        for(int i{}; i < word1.size() || i < word2.size(); ++i){
            if(i < word1.size()){
                x += word1[i];
            }
            if(i < word2.size()){
                x+= word2[i];
            }
        }

        return x;
    }
};