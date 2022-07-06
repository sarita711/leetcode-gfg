/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans;
  void x(TreeNode* root,TreeNode* target)
    {
        if(root!=NULL)
        {
            if(root->val==target->val)
            {
                ans= root;
                return;
            }
            x(root->left,target);
            x(root->right,target);
            
        }
        

    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
                  x(cloned,target);
        
        return ans;
        }
};