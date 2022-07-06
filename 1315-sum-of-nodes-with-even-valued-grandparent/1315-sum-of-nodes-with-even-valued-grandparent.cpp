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
    int num(TreeNode* root)
    {
        if(root!=NULL)
        {
            int x1=0;
            if(root->left!=NULL)
            {
                x1+=root->left->val;
            }
            if(root->right!=NULL)
            {
                x1+=root->right->val;
            }
            return x1;
        
        
        }
        return 0;
    }
    void x(TreeNode* root)
    {
        if(root!=NULL)
        {
            
            if(root->val%2==0)
            {
                sum+=num(root->left)+num(root->right);
                
                
            }
           
              x(root->left);
                x(root->right);
                
      }
    
    
    }
    int sumEvenGrandparent(TreeNode* root) {
        
   x(root) ;
        return sum;
        
    }
};