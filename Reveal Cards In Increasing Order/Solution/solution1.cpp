class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        queue<int> q;
        vector<int> ans (deck.size());

        sort(begin(deck), end(deck));

        for(int i{0}; i < deck.size(); ++i){
            q.push(i);
        }

        for(int i{0}; i < deck.size(); ++i){
            ans[q.front()] = deck[i];
            q.pop();
            q.push(q.front());
            q.pop(); 
        }

        return ans;
    }
};

