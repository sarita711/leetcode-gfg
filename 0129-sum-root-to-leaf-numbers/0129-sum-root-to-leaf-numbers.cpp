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
    int sum=0;
    void solve(TreeNode* root,int prev)
    {
        
        if(root!=NULL)
        {
            if(root->left==NULL && root->right==NULL)
            {
                int temp=prev*10+root->val;
                sum+=temp;
            }
            else{
                 if(root->left!=NULL)
                 {
                     solve(root->left,prev*10+root->val);
                 }
                if(root->right!=NULL)
                {
                    solve(root->right,prev*10+root->val);
                }
                
            }
            
        }
        return ;

    }
    int sumNumbers(TreeNode* root) {
        
        TreeNode* temp=root;
        solve(root,0);
        return sum;
        
        
        
    }
};