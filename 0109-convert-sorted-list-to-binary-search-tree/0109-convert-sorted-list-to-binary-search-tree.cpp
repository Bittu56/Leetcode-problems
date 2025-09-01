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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if(!head)
            return NULL;
        if(!head->next)
            return new TreeNode(head->val);
        
        //Find mid and make it root
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* slow_prev = NULL;
        while(fast && fast->next) {
            slow_prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        
        TreeNode* root = new TreeNode(slow->val); //Make root
        slow_prev->next = NULL; //We only want left half of linked list for left subtree
        
        root->left  = sortedListToBST(head);       //Make left subtree
        root->right = sortedListToBST(slow->next); //Make right subtree
        
        return root; //return root
        
    }
};