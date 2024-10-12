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
class BSTIterator {
public:
    stack<TreeNode*>mystack;
    BSTIterator(TreeNode* root) 
    {
        pushall(root);
        
    }
    
    int next() 
    {
        TreeNode* temp=mystack.top();
            mystack.pop();
        pushall(temp->right);
        return temp->val;
        
    }
    
    bool hasNext() {
        return !mystack.empty();
        
    }
    private:
    void pushall(TreeNode* node)
    {
        while(node!=NULL)
        {
            mystack.push(node);
            node=node->left;
        }
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */