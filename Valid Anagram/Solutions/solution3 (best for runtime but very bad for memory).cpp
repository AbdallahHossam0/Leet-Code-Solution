class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<char, int> sCount;
        unordered_map<char, int> tCount;
        for (char c : s) {
            sCount[c]++;
        }
        for (char c : t) {
            tCount[c]++;
        }
        return sCount == tCount;
}
};