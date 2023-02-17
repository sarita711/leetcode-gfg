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
    void solve(TreeNode*root)
    {
        if(root!=NULL)
        {
           v.push_back(root->val);
            solve(root->left);
            solve(root->right);
        }
    }
    
    int minDiffInBST(TreeNode* root) {
     
     solve(root);
     sort(v.begin(),v.end());
     vector<int>::iterator itr;
     int min1=1000000;
     itr=v.begin();

      int prev=*itr;
      itr++;
     for(itr=itr;itr!=v.end();itr++)
     {
         min1=min(min1,*itr-prev);
         prev=*itr;
     }
     return min1;

        
    }
};