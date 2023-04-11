https://leetcode.com/problems/linked-list-cycle-ii/

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
    ListNode *detectCycle(ListNode *head) {
        if(!head)
            return NULL;
        ListNode* fast=head->next;
        ListNode* slow=head;

        while(slow && fast && fast->next && slow!=fast){
           
            slow=slow->next;
            fast=fast->next->next;
        }
         
        if(fast && fast->next){
            slow=head;
            while(slow!=fast->next){
                cout<<slow->val<<" "<<fast->val<<endl;
                slow=slow->next;
                fast=fast->next;
            }

            return fast->next;
        }

        return NULL;
    }
};