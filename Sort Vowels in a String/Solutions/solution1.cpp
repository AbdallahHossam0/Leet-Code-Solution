class Solution {
public:
    bool isVowel(const char c){
        string vowels {"aeiouAEIOU"};
        for(const auto & v : vowels){
            if(v == c){
                return true;
            }
        }
        return false;
    }
    string sortVowels(string s) {
        vector<char> vec;
        for(auto& c : s){
            if(isVowel(c)){
                vec.push_back(c);
                c = '!';
            }
        }
        if(!vec.size()){
            return s;
        }
        sort(vec.begin(), vec.end());
        unsigned int i{};
        for(auto& c : s){
            if(c == '!'){
                c = vec[i];
                ++i;
            }
        }
        return s;
    }
};