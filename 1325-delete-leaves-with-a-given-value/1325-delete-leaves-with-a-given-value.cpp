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
   
    
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        
      /* if (root == nullptr)
            return nullptr;
     
        
        if (root->left == nullptr && root->right == nullptr && root->val == target){
            
            delete root;
            return nullptr;
        }
         root->left  = removeLeafNodes(root->left, target);

        
        root->right = removeLeafNodes(root->right, target);

         
        return root;*/
        if(root==NULL){
            return NULL;
        }
        
        if(root->left == NULL && root->right == NULL){
            if(root->val == target){
                return NULL;
            }
            return root;
        }
        root->left = removeLeafNodes(root->left,target);
        if(root->left == NULL && root->right == NULL){
          
           return removeLeafNodes(root,target);
        }
        root->right = removeLeafNodes(root->right,target);
        if(root->left == NULL && root->right == NULL){
           
            return removeLeafNodes(root,target);
        }
        return root;
        
    }
};