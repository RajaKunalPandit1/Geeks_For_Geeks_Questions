Output Status:

Runtime: 4 ms, faster than 78.49% of C++ online submissions for Symmetric Tree.
Memory Usage: 16.3 MB, less than 74.27% of C++ online submissions for Symmetric Tree.

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
    bool helper(TreeNode* p, TreeNode* q){
        if(!p && !q) return true;
        if(!p || !q) return false;
        if(p->val == q->val) return helper(p->left, q->right) && helper(p->right, q->left);
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(!root->left && !root->right) return true;
        return helper(root->left, root->right);        
    }
};
