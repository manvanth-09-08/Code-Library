////////////// QUESTION ////////////////
/*

Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.

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


///////////// ALGORITHM /////////////////
/*

1. Create a variable x and initialize it to 0.
2. Create a pointer cur and initialize it to headA.
3. Iterate through the list until cur is not NULL.
4. Increment x.
5. Create a variable y and initialize it to 0.
6. Create a pointer cur and initialize it to headB.
7. Iterate through the list until cur is not NULL.
8. Increment y.
9. Create a pointer cur and initialize it to headA.
10. Create a pointer cur2 and initialize it to headB.
11. If x is greater than y, then iterate through the list until x is not equal to y.
12. Else, iterate through the list until x is not equal to y.
13. Iterate through the list until cur is not equal to cur2 and cur and cur2 are not NULL.
14. If cur or cur2 is NULL, then return NULL.
15. Return cur.



*/