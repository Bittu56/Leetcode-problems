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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string t1, t2;
        dfs(root1, t1);
        dfs(root2,t2);
        return t1==t2;
        
    }
    
    void dfs(TreeNode* root, string &s1)
    {
        if (root==NULL)
            return;
        
        if(root->left == NULL && root->right == NULL)
            s1+= to_string(root-> val)+ ",";
            dfs(root->left, s1);
            dfs(root->right, s1);
    }
};