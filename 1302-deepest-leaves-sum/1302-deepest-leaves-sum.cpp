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
    int h1=0;
    int sum=0;
    vector<int>v;
    int ra=0;
    int x(TreeNode * root)
    {
        if(root!=NULL)
        {
          
            return 1+max(x(root->left),x(root->right));
        }
        return 0;
    }
  
    void y(TreeNode * root)
    {
        
        if(root!=NULL)
        {

              if(x(root->left)==x(root->right))
              {
                  
                  if(root->left==NULL  && root->right==NULL)
                  {
                      sum+=root->val;
                  
                  }
                  else{
                      
                      
                      y(root->left);
                      y(root->right);
                  }
                  
                  
              }
              else if(x(root->left)>x(root->right))
              {

                  y(root->left);
              
              
              }
              else{

                y(root->right);
              }
          }
 }
      int deepestLeavesSum(TreeNode* root) {
      
       
        y(root);
          
        
        
        return sum;
        
    }
};