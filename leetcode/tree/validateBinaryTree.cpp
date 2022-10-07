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
    TreeNode* pre;
    bool ch=true;
    void solve(TreeNode* &a){
        if(a==NULL)
            return;
        solve(a->left);
        if(pre && pre->val>=a->val)
            ch=false;
        pre=a;
        solve(a->right);
    }
    bool isValidBST(TreeNode* root) {
        solve(root);
        return ch;
    }
};
