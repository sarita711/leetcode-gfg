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

          x(root->left);
           v.push_back (root->val);
           x(root->right);
           
       
       }
    
    }
    int getMinimumDifference(TreeNode* root) {
        x(root);
        
        sort(v.begin(),v.end());
            
    
        int mn=INT_MAX;
        vector<int>::iterator itr;
        
        itr=v.begin();
        int prev=*itr;
        itr++;
        while(itr!=v.end())
        {

           mn=min(mn,*itr-prev);
            prev=*itr;
            itr++;
        
        }
        return mn;
    }
};