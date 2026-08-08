/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<int> ans;
    void p1(TreeNode* node) {
        if (node == NULL) {
            return;
        }
        p1(node->left);
        ans.push_back(node -> val);
        p1(node->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        p1(root);
        return ans;
    }
};