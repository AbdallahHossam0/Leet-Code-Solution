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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* newHead {new ListNode};
        ListNode* newCur {newHead};
        bool f {false};
        auto cur{head};
        int sum{};

        while(cur){
            if(cur -> val == 0 && sum == 0){
               cur = cur -> next; 
                continue;

            }
            else if(cur -> val == 0){
                if(!f){
                    newCur -> val = sum;
                    f = true;
                }
                else{
                    auto node {new ListNode};
                    node -> val = sum;
                    newCur -> next = node;
                    newCur = newCur -> next;
                }
                sum = 0;
            }
            else{
                sum += cur -> val;
            }
            cur = cur -> next;
        }

        return newHead; 
    }
};