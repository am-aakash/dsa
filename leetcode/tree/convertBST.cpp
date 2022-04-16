class Solution {
public:
    int sum=0;
    TreeNode* convertBST(TreeNode* root) {
        if(root==NULL) return root;
        
        // Go to rightmost : Right is priority
        TreeNode* right = convertBST(root->right);
        
        // start taking sum
        sum+=root->val;
        root->val=sum;
        
        // The Go to lefter sides
        TreeNode* left = convertBST(root->left);
        
        return root;
    }
};
