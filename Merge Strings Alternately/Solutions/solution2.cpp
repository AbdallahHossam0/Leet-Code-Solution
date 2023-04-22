class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string x;

        for(int i{}; i < word1.size() || i < word2.size(); ++i){
            if(i < word1.size()){
                x.push_back(word1[i]);
            }
            if(i < word2.size()){
                x.push_back(word2[i]);
            }
        }

        return x;
    }
};