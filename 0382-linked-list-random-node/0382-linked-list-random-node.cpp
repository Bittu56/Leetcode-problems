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
    int size=0;
    ListNode* temp;
    ListNode* temp2;
    Solution(ListNode* head) {
        temp = temp2 = head;
        while(head!=NULL){
            size++;
            head=head->next;
        }
        
    }
    
    int getRandom() {
        temp = temp2;
        int r = rand() % size;
        for(int i=0;i<r;i++){
            temp=temp->next;
        }
        return temp->val;
    }
};
/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */