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
    int num(TreeNode * root)
    {
         if(root!=NULL)
         {
           
            return root->val+num(root->left)+num(root->right);
         }
        return 0;

    }
    int div(TreeNode* root)
    {
        if(root!=NULL)
        {
          return 1+div(root->left)+div(root->right);
        }
        return 0;
    }
    void x(TreeNode * root)
    {
       
        if(root!=NULL)
        {
           if(root->val==num(root)/div(root))
           {
               sum++;
           }
           x(root->left);
            x(root->right);
        }
  }
    
    int averageOfSubtree(TreeNode* root) {
       
          x(root);
        
         return sum; 
        
        
    }
};