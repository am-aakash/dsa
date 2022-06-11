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
public:
    int sumOfChildren(TreeNode *root)
    {
        if (!root)
            return 0;
        int sum = 0;
        if (root->left)
            sum += root->left->val;
        if (root->right)
            sum += root->right->val;
        return sum;
    }
    int sumEvenGrandparent(TreeNode *root)
    {
        if (!root)
            return 0;
        int sum = 0;
        if (root->val % 2 == 0)
            sum += sumOfChildren(root->left) + sumOfChildren(root->right);
        return sum + sumEvenGrandparent(root->left) + sumEvenGrandparent(root->right);
    }
};