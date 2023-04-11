https://leetcode.com/problems/delete-node-in-a-linked-list/

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
        
        ListNode* head=node;
        
        while(head->next->next){
            head->val=head->next->val;
            head=head->next;
        }
        head->val=head->next->val;
        head->next=NULL;
        
    }
};