
// Recursive
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        inOrder(root, result);

        return result;
    }
private:
    void inOrder(TreeNode* node, vector<int>& result)
    {
        if(!node) return;

        inOrder(node->left, result);
        result.push_back(node->val);
        inOrder(node->right, result);
    }
};