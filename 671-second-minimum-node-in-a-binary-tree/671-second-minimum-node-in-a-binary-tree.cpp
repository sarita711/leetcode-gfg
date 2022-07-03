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
    void x(TreeNode * root)
    {
        if(root!=NULL)
        {
            x(root->right);
           s.insert(root->val);
            x(root->left);
          
        
        }
    
       
    }
    int findSecondMinimumValue(TreeNode* root) {
      
    x(root);
  
        set<int>::iterator itr;
        
        itr=s.begin();
        itr++;
        if(s.size()>1){
        return *itr;}
        return -1;
        
    }
};