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
            int bst(TreeNode * root, int &max)
        {
            if(root==NULL)
                return 0;
            int left=bst(root->left,max);
            int right=bst(root->right, max);
            int height=left>right?left+1:right+1;
            if(left+right>max)max=left+right;
            return height;
            
        }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
            return 0;
        
        if(root->left==NULL && root->right ==NULL)
            return 0;
        int max=0;
        bst(root, max);
        return max;
        

        
    }
};