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
    bool exists(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root==p || root==q) return true;
        if(root==NULL) return false;
        return exists(root->left,p,q) || exists(root->right,p,q);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if((root==p || root==q) && (exists(root->left,p,q) || exists(root->right,p,q))) return root;
        if(exists(root->left,p,q) && exists(root->right,p,q)) return root;
        if(exists(root->left,p,q)) return lowestCommonAncestor(root->left,p,q);
        if(exists(root->right,p,q)) return lowestCommonAncestor(root->right,p,q);
        return root;
    }
};

// Better approach
class Solution {
 public:
     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
         if(root==NULL) return NULL;
    
         if(root==p || root==q) return root;
    
         TreeNode* left=lowestCommonAncestor(root->left,p,q);
         TreeNode* right=lowestCommonAncestor(root->right,p,q);
    
         if(left!=NULL and right!=NULL) return root;
    
         if(left==NULL and right==NULL) return NULL;
    
         return left!=NULL? left : right;
     }
 };
