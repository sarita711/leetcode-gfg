class Solution {
public:
    bool valit(TreeNode* root,TreeNode* min,TreeNode* max)
    {
        if(root==NULL)
            return true;
        if(min!=NULL&&min->val>=root->val)
            return false;
        if(max!=NULL&&max->val<=root->val)
            return false;
        bool leftvalid = valit(root->left,min,root);
        bool rightvalid = valit(root->right,root,max);
        return leftvalid and rightvalid;
    }
    bool isValidBST(TreeNode* root) {
    
     return valit(root,NULL,NULL);
    }
};