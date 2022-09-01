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
    int solve(TreeNode* root,int n)
    {
        if(root==NULL){
            
            return 0;
        }
        if(n>root->val){
            return solve(root->left,n)+solve(root->right,n);
        }
        if(root!=NULL){
        return 1+solve(root->left,root->val)+solve(root->right,root->val);}
        
        return 0;
        
        
    }
    int goodNodes(TreeNode* root) {
       
        
        return solve(root,root->val);
        
        
    }
};