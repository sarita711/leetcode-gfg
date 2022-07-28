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
    vector<int>v;
   
    void x(TreeNode * root)
    {
        if(root!=NULL)
        {
            v.push_back (root->val);
            x(root->left);
            x(root->right);
            
        }
    
    }
    
    TreeNode* increasingBST(TreeNode* root) {
       TreeNode * my1=root;
        TreeNode *my2=root;
        
        x(root);
       sort(v.begin(),v.end());
        vector<int>::iterator itr;
         itr=v.begin();
         root->val=*itr;
        itr++;
          while(itr!=v.end())
          {
              TreeNode* temp =new TreeNode(*itr);
               my1->right=temp;
              my1->left=NULL;
              my1=my1->right;
              itr++;
          
          
          }
      
        return root;
        
    }
};