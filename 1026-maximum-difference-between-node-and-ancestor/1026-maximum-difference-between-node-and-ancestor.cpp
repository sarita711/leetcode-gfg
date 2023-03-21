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
    int mxx=INT_MIN;
    void solve(TreeNode* root,int mx,int mn)
    {
        if(root!=NULL)
        {
            mx=max(mx,root->val);
            mn=min(mn,root->val);
            if(root->left==NULL && root->right==NULL)
            {
                mxx=max(mxx,mx-mn);
                return;
            }
            solve(root->left,mx,mn);
            solve(root->right,mx,mn);
        }
    }
    int maxAncestorDiff(TreeNode* root) {
        
        int mx=INT_MIN;
        int mn=INT_MAX;
        solve(root,mx,mn);
        return mxx;
        
        
        
    }
};