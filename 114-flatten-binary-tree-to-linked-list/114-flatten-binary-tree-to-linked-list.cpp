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
    void x(TreeNode* root)
    {
        if(root!=NULL)
        {
            
             v.push_back (root->val);
             x(root->left);
            x(root->right);
        }
     
    }
    void y(TreeNode* root,vector<int>v1 )
    {
        vector<int>::iterator itr1;
        itr1=v1.begin();
        root->val=*itr1;
        itr1++;
        while(itr1!=v1.end())
       
        {
            
                TreeNode *x1=new TreeNode(*itr1);
                root->right=x1;
            
            root->left=NULL;
            root=root->right;
            itr1++;
           
        }
        
        
    }
    void flatten(TreeNode* root) {
         
        if(root==NULL)
        {
            return ;
        }
          x(root);
        if(v.size()==1)
        {
            return;
        }
          y(root,v);
          v.clear();
 
        
    }
};