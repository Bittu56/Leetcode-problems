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
    
    TreeNode * head= new TreeNode (0);
    TreeNode* ptr=head;
public:
    
    void bst(TreeNode * root)
    {
        
        if(!root)
        return;
        
        bst(root->left);
        head->right= new TreeNode(root->val);
        head=head->right;
        bst(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        
        bst(root);
        
        return ptr->right;
        
    }
};