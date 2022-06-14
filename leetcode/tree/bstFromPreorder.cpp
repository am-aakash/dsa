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
class Solution
{
    int i = 0;

public:
    TreeNode *bstFromPreorder(vector<int> &preorder, int max_val = INT_MAX)
    {
        if (i == preorder.size() or max_val < preorder[i])
            return NULL;

        TreeNode *root = new TreeNode(preorder[i++]);

        root->left = bstFromPreorder(preorder, root->val);
        root->right = bstFromPreorder(preorder, max_val);

        return root;
    }
};