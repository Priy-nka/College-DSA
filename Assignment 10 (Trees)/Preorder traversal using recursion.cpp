class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
    vector<int> ans;
    if (root == NULL) return ans;
    ans.push_back(root->val);
    vector<int> left = preorderTraversal(root->left);
    ans.insert(ans.end(), left.begin(), left.end());
    vector<int> right = preorderTraversal(root->right);
    ans.insert(ans.end(), right.begin(), right.end());
    return ans;
}

};
