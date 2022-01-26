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
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> vec;
        queue<TreeNode*> q;
        if(!root) return vec;
        vector<int> tv;
        q.push(root);q.push(nullptr);
        while(!q.empty()){
            //cout<<q.size()<<endl;
            TreeNode* temp=q.front();q.pop();
            if(!temp){
                if(!q.empty()) q.push(nullptr);
                vec.push_back(tv);
                tv.clear();
            }
            else{
                tv.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);  
            }
            
        }
        return vec;
    }
};
