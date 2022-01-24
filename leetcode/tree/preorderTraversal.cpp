class Solution {
public:
    vector<int> ans;
    void preorderTraversalHelper(TreeNode* root) {
        if(root==NULL) return;
        ans.push_back(root->val);
        // cout<<root->val<<" ";
        preorderTraversalHelper(root->left);
        preorderTraversalHelper(root->right);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        preorderTraversalHelper(root);
        return ans;
    }
};
//PreOrder = NLR
