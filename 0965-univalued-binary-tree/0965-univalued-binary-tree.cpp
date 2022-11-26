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
   
    set<int>s;
    void solve(TreeNode* root)
    {
        if(root!=NULL)
        {
           
            s.insert(root->val);
            solve(root->left);
            solve(root->right);
        }
    }
     
    
    
    bool isUnivalTree(TreeNode* root) {
    if(root==NULL)
    {
        return true;
    }
    int x1=root->val;
    solve(root);
   
   
       
        if(s.size()==1)
        {
            return true;

        }
        return false;
    }
};