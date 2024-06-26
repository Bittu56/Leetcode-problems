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
    
    void inorder(TreeNode* root, vector<int>&vec)
    {
        if(!root)
        return ;
        
        inorder(root->left, vec);
        vec.push_back(root->val);
        inorder(root->right, vec);
        
    }
    
     TreeNode* construct(int left, int right, vector<int> &vec)
     {
         if(left>right)
             return NULL;
          int mid=0;
         mid=left+(right-left)/2;
         
         TreeNode* root=new TreeNode(vec[mid]);
         root->left=construct(left, mid-1, vec);
         root->right=construct(mid+1, right, vec);
         
         return root;
    
     }
    
    TreeNode* balanceBST(TreeNode* root) {
        
        vector<int>vec;
        inorder(root, vec);
        int l=0;
        int r=vec.size()-1;
        return construct(l, r, vec);
        
        
    }
};