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
    int maxi=INT_MIN;
    
    int dfs(TreeNode* root, int &maxi)
    {
        if(root==NULL)
            return 0;
        int lh=std::max(0,dfs(root->left,maxi));
        int rh=std::max(0, dfs(root->right,maxi));
        maxi=std::max(maxi, lh+rh+root->val);
        return root->val+max(lh,rh);
    }
    int maxPathSum(TreeNode* root) {
        if(root==NULL)
            return 0;
        dfs(root, maxi);
        return maxi;
        
    }
};