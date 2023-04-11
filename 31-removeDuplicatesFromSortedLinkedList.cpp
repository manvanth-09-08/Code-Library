https://leetcode.com/problems/remove-duplicates-from-sorted-list/

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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)
            return NULL;
        ListNode* cur=head->next;
        ListNode* prev=head;

        while(cur){
            if(cur->val == prev->val)
            {
                cur=cur->next;
                prev->next=cur;
            }
            else{
                 prev=cur;
            cur=cur->next;
            }
           
        }

        return head;
        
    }
};