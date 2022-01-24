class Solution {
public:
    vector<int> ans;
    void inorderTraversalHelper(TreeNode* root) {
        if(root==NULL) return;
        inorderTraversalHelper(root->left);
        ans.push_back(root->val);
        inorderTraversalHelper(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        inorderTraversalHelper(root);
        return ans;
    }
};
