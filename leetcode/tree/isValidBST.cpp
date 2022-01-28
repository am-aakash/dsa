class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return isValidBstHelper(root, -2147483649, 2147483649);
    }
    bool isValidBstHelper(TreeNode* root, long long mini, long long maxi){
        if(root==NULL) return true;
        if(root->val >= maxi || root->val <=mini) return false;
        return isValidBstHelper(root->left, mini, root->val) &&
        isValidBstHelper(root->right, root->val, maxi);
    }
};
