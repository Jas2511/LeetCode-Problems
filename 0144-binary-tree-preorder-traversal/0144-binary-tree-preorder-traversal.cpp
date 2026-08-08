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
    void p2(TreeNode* Node) {
        if (Node == NULL) {
            return;
        }
        ans.push_back(Node->val);
        p2(Node->left);
        p2(Node->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        p2(root);
        return ans;
    }
};