TreeNode* lowestCommonAncestor(TreeNode* node, TreeNode* p, TreeNode* q) {
        // Using property of BST, if(p<curr<q) the curr is ans;
        if(node->val > min(p->val, q->val) && node->val < max(p->val, q->val)) return node;
        if(node->val == q->val || node->val == p->val) return node;
        
        // Doing Binary search if p and q on left or right!!
        if(node->val > max(p->val, q->val)) return lowestCommonAncestor(node->left,p,q);
        return lowestCommonAncestor(node->right,p,q);
}
