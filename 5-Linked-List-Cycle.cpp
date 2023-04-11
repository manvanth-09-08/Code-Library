////////////////// QUESTION ///////////////
/*

Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.

*/


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


///////////// ALGORITHM /////////////////

/*

1. If the head is NULL, then return NULL.
2. Create a pointer fast and initialize it to the next element of the head.
3. Create a pointer slow and initialize it to the head.
4. Iterate through the list until slow and fast are not NULL and fast->next is not NULL and slow is not equal to fast.
5. If slow and fast are not NULL and fast->next is not NULL and slow is equal to fast, then create a pointer slow and initialize it to the head.
6. Iterate through the list until slow is not equal to fast->next.
7. Return fast->next.

*/
