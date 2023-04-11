https://leetcode.com/problems/intersection-of-two-linked-lists/

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        int x=0;

        ListNode* cur=headA;

        while(cur){
            cur=cur->next;
            x++;
        }

         int y=0;

        cur=headB;

        while(cur){
            cur=cur->next;
            y++;
        }
        cur=headA;
        ListNode* cur2=headB;
        if(x>y){
            
            while(x!=y){
                cur=cur->next;
                x--;
            }
        }

        else{
              while(x!=y){
                cur2=cur2->next;
                y--;
            }

        }

        while(cur!=cur2 && cur && cur2)
        {
            cur=cur->next;
            cur2=cur2->next;
            // cout<<cur->val<<" "<<cur2->val<<endl;
        }

        if(!cur || !cur2)
            return NULL;

        return cur;
        
    }
};