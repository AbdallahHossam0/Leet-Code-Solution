/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        auto *prev {node};
        auto * cur {node -> next};

        while(cur -> next){
            prev -> val = cur -> val;
            prev = cur;
            cur = cur -> next;
        }
        prev -> val = cur -> val;
        prev -> next = NULL;
        delete cur;
        
    }
};