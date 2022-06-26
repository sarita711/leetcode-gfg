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
    int x(TreeNode* root)
    {
        if(root!=NULL)
        {
           return root->val+x(root->left)+x(root->right);
        
        }
        return 0;
    }
    bool checkTree(TreeNode* root) {
        
        int sum=root->val;
        return sum==x(root->left)+x(root->right);
        
        
    }
};