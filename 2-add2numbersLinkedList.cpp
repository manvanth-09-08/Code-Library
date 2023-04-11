// Question : https://leetcode.com/problems/add-two-numbers/description/


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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=NULL;
        int sum,carry=0;
        while(l1 && l2)
        {
            sum=l1->val+l2->val+carry;
            carry=0;
            if(sum>9)
            {
                carry=1;
                sum=sum%10;
            }
            ListNode* temp=new ListNode(sum);
            ListNode* cur=head;
            if(cur==NULL)
                head=temp;
            else{
            while(cur->next!=NULL)
                cur=cur->next;
            cur->next=temp;
            }
            l1=l1->next;
            l2=l2->next;
        }
        if(l1)
        {
            while(l1){
            sum=l1->val+carry;
            carry=0;
            if(sum>9)
            {
                carry=1;
                sum=sum%10;
            }
            ListNode* temp=new ListNode(sum);
            ListNode* cur=head;
            if(cur==NULL)
                head=temp;
            else{
            while(cur->next!=NULL)
                cur=cur->next;
            cur->next=temp;
            }
            l1=l1->next;
            }
        }
        
        if(l2)
        {
            while(l2){
          
            sum=l2->val+carry;
            carry=0;
            if(sum>9)
            {
                carry=1;
                sum=sum%10;
            }
            ListNode* temp=new ListNode(sum);
            ListNode* cur=head;
            if(cur==NULL)
                head=temp;
            else{
            while(cur->next!=NULL)
                cur=cur->next;
            cur->next=temp;
            }
            l2=l2->next;
            }
        
        }
        if(carry)
        {
             ListNode* temp=new ListNode(carry);
            ListNode* cur=head;
            if(cur==NULL)
                head=temp;
            else{
            while(cur->next!=NULL)
                cur=cur->next;
            cur->next=temp;
            }
        }
        return head;
        
    }
};