/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
private:
    vector<int> vec;
    int s;
public:
    Solution(ListNode* head) {
        auto ptr{head};
        while(ptr){
            vec.push_back(ptr -> val);
            ptr = ptr -> next;
        }
        srand(time(NULL));
        s = vec.size();
    }
    
    int getRandom() {
        return vec[rand() % s];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */