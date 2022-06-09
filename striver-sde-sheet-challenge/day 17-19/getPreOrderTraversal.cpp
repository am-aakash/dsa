vector<int> ans;
void preorderTraversalHelper(TreeNode *root)
{
    if (root == NULL)
        return;
    ans.push_back(root->data);
    // cout<<root->val<<" ";
    preorderTraversalHelper(root->left);
    preorderTraversalHelper(root->right);
}
vector<int> getPreOrderTraversal(TreeNode *root)
{
    ans.clear();
    preorderTraversalHelper(root);
    return ans;
}