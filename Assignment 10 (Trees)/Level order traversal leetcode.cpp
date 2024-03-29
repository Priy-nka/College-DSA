class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> ans;
    if (!root)
     return ans;
    
    queue<TreeNode*> q;
    q.push(root);
    
    while (!q.empty()) {
        int si = q.size();
        vector<int> temp; 
        for (int i = 0; i < si; i++) {
            TreeNode* curr = q.front();
            q.pop();
            temp.push_back(curr->val);
            if (curr->left) {
                q.push(curr->left);
            } 
            if (curr->right) {
                q.push(curr->right);
            }
        }
        ans.push_back(temp);
    }
    return ans;
}

};
