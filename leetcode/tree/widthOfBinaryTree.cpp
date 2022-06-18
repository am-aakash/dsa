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
    int widthOfBinaryTree(TreeNode *root)
    {
        int ans = 0;
        if (root == NULL)
            return ans;

        queue<pair<TreeNode *, int>> q;
        q.push({root, 0});

        while (!q.empty())
        {
            int currMin = q.front().second, size = q.size(), l, r;
            // cout<<currMin<<"\n";
            for (int i = 0; i < size; i++)
            {
                long long int curr = q.front().second - currMin;
                TreeNode *temp = q.front().first;
                q.pop();
                // cout<<curr<<" ";
                if (i == 0)
                    l = curr;
                if (i == size - 1)
                    r = curr;

                if (temp->left)
                    q.push({temp->left, curr * 2 + 1});
                if (temp->right)
                    q.push({temp->right, curr * 2 + 2});
            }
            // cout<<"\n";
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};