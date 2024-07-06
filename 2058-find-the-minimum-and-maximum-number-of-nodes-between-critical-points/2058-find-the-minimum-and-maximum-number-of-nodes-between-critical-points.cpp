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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        
        ListNode* prev=head;
        ListNode* curr=head->next;
        
        int i=1;
        int prevcriticpos=0;
        int fistcriticpos=0;
        int mindistance=INT_MAX;
        
        while(curr->next !=NULL)
        {
            if((curr->val < prev->val && curr ->val < curr->next->val) || (curr->val > prev->val && curr ->val > curr->next->val))
            {
                if(prevcriticpos ==0)
                {
                prevcriticpos =i;
                fistcriticpos =i;
                }
                else
                {
                    mindistance =min(mindistance, i - prevcriticpos);
                    prevcriticpos =i;
                }
                
            }
            i++;
            prev=curr;
            curr=curr->next;
        }
        if(mindistance == INT_MAX)
            return {-1,-1}; 
        return {mindistance, prevcriticpos - fistcriticpos};
    }

};