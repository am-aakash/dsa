vector<int> ans;
void inorderTraversalHelper(TreeNode *root)
{
    if (root == NULL)
        return;
    inorderTraversalHelper(root->left);
    ans.push_back(root->data);
    inorderTraversalHelper(root->right);
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    ans.clear();
    inorderTraversalHelper(root);
    return ans;
}