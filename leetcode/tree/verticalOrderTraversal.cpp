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
    vector<vector<int>> verticalTraversal(TreeNode *root)
    {
        vector<vector<int>> ans;
        if (root == NULL)
            return ans;
        // map storing <line <level <numbers at that line and level> > >
        map<int, map<int, priority_queue<int, vector<int>, greater<int>>>> nodeMap;
        // queue storing <node <its line,level> >
        queue<pair<TreeNode *, pair<int, int>>> todo;
        todo.push({root, {0, 0}});
        while (!todo.empty())
        {
            auto it = todo.front();
            todo.pop();
            TreeNode *curr = it.first;
            int vertical = it.second.first, level = it.second.second;
            nodeMap[vertical][level].push(curr->val);

            if (curr->left)
                todo.push({curr->left, {vertical - 1, level + 1}});
            if (curr->right)
                todo.push({curr->right, {vertical + 1, level + 1}});
        }

        // just copy from map to ans
        for (auto itr1 : nodeMap)
        {
            vector<int> temp;
            for (auto itr2 : itr1.second)
            {
                while (itr2.second.size() > 0)
                {
                    temp.push_back(itr2.second.top());
                    itr2.second.pop();
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};