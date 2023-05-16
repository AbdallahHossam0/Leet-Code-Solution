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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* cur{head};
        ListNode* prevEnd{head};
        ListNode* curEnd{head};

        int val1{0};

        for(int i{}; i < k - 1; ++i){
            cur = cur -> next;
        }
        val1 = cur -> val;
        cout << val1;

        int i{};
        while(true){
            if(i < k - 1){
                curEnd = curEnd -> next;
            }
            else{
                if(curEnd -> next == nullptr){
                    break;
                }
                else{
                    curEnd = curEnd-> next;
                    prevEnd = prevEnd -> next;
                }
            }
            ++i;
        }
        cur -> val = prevEnd -> val;
        prevEnd -> val = val1;
        return head;

    }
};