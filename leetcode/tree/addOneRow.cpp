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
    void solve(TreeNode* t, int val,int d){
        if(t==NULL)
            return;
        if(d==1){
            TreeNode* a=new TreeNode(val),*b=new TreeNode(val);
            a->left=t->left;
            b->right=t->right;
            t->left=a;
            t->right=b;
            return;
        }
        solve(t->left,val,d-1);
        solve(t->right,val,d-1);
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode* t=new TreeNode(val);
            t->left=root;
            return t;
        }
        solve(root,val,depth-1);
        return root;
    }
};
