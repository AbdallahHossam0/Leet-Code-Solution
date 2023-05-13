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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* head {nullptr};
        ListNode* cur {nullptr};
        ListNode* temp {nullptr};
        int val{INT_MAX};
        bool flag {false};
        while(true){
            flag = false;
            val = INT_MAX;
            for(auto list : lists){
                if(list != nullptr){
                    flag = true;
                    break;
                }
            }
            if(!flag){break;}

            for(auto node : lists){
                if(node != nullptr){
                    val = min(val, node->val);
                }
            }

            for(auto& list : lists){
                if(list != nullptr){
                    if(val == list -> val){
                        list = list -> next;
                        break;
                    }
                }
            }

            if(head == nullptr){
                head = cur = new ListNode{val};
            }
            else{
                temp = new ListNode {val};
                cur -> next = temp;
                cur = cur-> next; 
            }
            

        }

        return head;

    }
};
