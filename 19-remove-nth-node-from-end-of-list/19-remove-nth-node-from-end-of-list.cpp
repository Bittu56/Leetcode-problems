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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       
        ListNode * start=new ListNode();
        start->next=head;
        
        ListNode* first= start;
        ListNode * last=start;
        
        if(head->next==NULL)
            return NULL;
        
        for(int i=1;i<=n;++i)
        {
            first=first->next;
        }
        
        while(first->next!=NULL)
        {
          
            first=first->next;
             last=last->next;
        }
        
        last->next=last->next->next;
        
        return start->next;
    }
};