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
public:
    ListNode* swapPairs(ListNode* head) {
        
        if(head == nullptr || head -> next == nullptr){
            return head;
        }
        
        ListNode* node = new ListNode();
        ListNode* prevNode = node;
        ListNode* currNode = head;
        
        while(currNode && currNode->next){
            
            prevNode -> next = currNode->next;
            currNode -> next = prevNode->next->next;
            prevNode -> next -> next = currNode;
            
            prevNode = currNode;
            currNode = currNode->next;
        }
        
        return node->next;
    }
};
