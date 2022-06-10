/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void inOrderDfs(TreeNode *root, vector<int> &ans)
{
    if (!root)
        return;

    inOrderDfs(root->left, ans);
    ans.push_back(root->val);
    inOrderDfs(root->right, ans);
}
vector<int> Solution::inorderTraversal(TreeNode *root)
{
    vector<int> ans;
    inOrderDfs(root, ans);
    return ans;
}
