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
    void solve(TreeNode* a){
        if(a==NULL || (a->left==NULL && a->right==NULL))
            return;
        if(a->left!=NULL){
            solve(a->left);
            TreeNode* r=a->right;
            a->right=a->left;
            a->left=NULL;
            TreeNode* l=a->right;
            while(l->right!=NULL)
                l=l->right;
            l->right=r;
        }
        solve(a->right);
    }
    void flatten(TreeNode* root) {
        solve(root);
    }
};
