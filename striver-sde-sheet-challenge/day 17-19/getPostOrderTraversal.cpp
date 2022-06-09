vector<int> ans;
void postOrderTraversalHelper(TreeNode *root)
{
    if (root == NULL)
        return;
    postOrderTraversalHelper(root->left);
    postOrderTraversalHelper(root->right);
    ans.push_back(root->data);
}
vector<int> getPostOrderTraversal(TreeNode *root)
{
    ans.clear();
    postOrderTraversalHelper(root);
    return ans;
}