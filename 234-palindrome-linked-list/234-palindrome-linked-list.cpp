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
    ListNode *reverse(ListNode *temp)
        {
            ListNode *prev=nullptr;
            ListNode *curr=nullptr;
            
            while(temp!=NULL)
            {
                curr=temp->next;
                temp->next=prev;
                prev=temp;
                temp=curr;
               
                
            }
            
            return prev;
            
            
        }
        
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return true;
        
        ListNode *fast= head;
        ListNode *slow=head;
        
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        slow->next= reverse(slow->next);
        slow=slow->next;
        
        
        while(slow!=NULL)
        {
            if(slow->val!=head->val)
                return false;
              slow=slow->next;
              head=head->next;
        }
        
        return true;
    }
};
    