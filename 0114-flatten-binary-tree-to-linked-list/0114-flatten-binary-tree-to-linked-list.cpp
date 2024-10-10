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
    TreeNode* prev;
    
void checkNode(TreeNode * root)
{
     if(!root)
     return;
    
    if(prev)
    {
        prev->left=NULL;
        prev->right=root;
    }
    
    TreeNode* r=root->right;
    prev=root;
    checkNode(root->left);
    checkNode(r);
        
    }
    
        void flatten(TreeNode* root) {
        prev=NULL;
        checkNode(root);
        
        
        
    }
};