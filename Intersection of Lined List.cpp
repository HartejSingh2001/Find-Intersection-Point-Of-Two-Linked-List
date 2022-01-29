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
        ListNode *tempA=headA,*tempB=headB;
        int d=0,l1=1,l2=1;
        while(tempA!=NULL)
        {
            l1++;
            tempA=tempA->next;   
        }
        while(tempB!=NULL)
        {
            l2++;
            tempB=tempB->next;   
        }
        tempA=headA;
        tempB=headB;
        d=l1-l2;
        int count=0;// taking count=0 here is very imp
        if(d<0)
        {
            d=d*(-1);
        }
        if(l1>l2 || l1==l2 )
        {
            while(count!=d)
            {
               tempA=tempA->next;
                count++;
            }
        }
        else
        {
            while(count!=d)
            {
               tempB=tempB->next;
                count++;
            }
            
        }
        
        while(tempA!=tempB)
        {
            tempA=tempA->next;
            tempB=tempB->next;
        }
        
        if(tempA==tempB)
        {
            return tempA;
        }
        else
        {
            return NULL;
        }
        
    }
};
