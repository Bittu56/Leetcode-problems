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
    vector<vector<int>> verticalTraversal(TreeNode* root) 
    {
         // level, vertical,node for map
        map<int, map<int,multiset<int>>> mp;
        
        queue<pair<TreeNode*, pair<int,int>>>todo;
        todo.push({root, {0,0}});
        while(!todo.empty())
        {
            auto p =todo.front();
            todo.pop();
            TreeNode* node= p.first;
            int x=p.second.first;
            int y=p.second.second;
            //x is for level and y is for vertical
            mp[x][y].insert(node->val);
            if(node->left)
            {
                todo.push({node->left,{x-1,y+1}});
            }
            if(node->right)
            {
                todo.push({node->right,{x+1,y+1}});
            }
        } 
            
            vector<vector<int>> result;
            for(auto q:mp)
            {
                vector<int>col;
                for(auto r: q.second)
                {
                    col.insert(col.end(), r.second.begin(), r.second.end());
                }
                result.push_back(col);
                
            }
            return result;
        
    }
};