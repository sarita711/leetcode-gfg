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
    map<int,int>m;
    vector<int>v;
   
    int mx1=0;
    void x(TreeNode* root)
    {
         if(root!=NULL)
         {
            m[root->val]++;
             x(root->left);
             x(root->right);
             v.push_back(root->val);
     
         }
         
    
    }
    void y(TreeNode* root)
    {
         if(root!=NULL)
         {
             if(mx1<m[root->val] )
             {
                
                 mx1=max(m[root->val],mx1);
                 
                 
             }
              y(root->left);
                 y(root->right);
            
         }
    
    
    }
    
    vector<int> findMode(TreeNode* root) {
        x(root);
        y(root);
      vector<int>v1;
        vector<int>::iterator itr;
        for(itr=v.begin();itr!=v.end();++itr)
        {
            if(m[*itr]==mx1)
            {
              v1.push_back(*itr);
                m[*itr]=0;
            }

            
        }
       sort(v1.rbegin(),v1.rend());
        return v1;
    }
};