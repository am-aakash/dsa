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
    vector<vector<int>> ans;
    void helper(TreeNode *root, int x, vector<int> store)
    {
        if (!root)
            return;
        store.push_back(root->val);
        x = x - root->val;
        if (x == 0 && !root->left && !root->right)
        {
            ans.push_back(store);
            return;
        }
        helper(root->left, x, store);
        helper(root->right, x, store);
    }
    vector<vector<int>> pathSum(TreeNode *root, int x)
    {
        if (!root)
            return ans;
        vector<int> store;
        helper(root, x, store);
        return ans;
    }
};