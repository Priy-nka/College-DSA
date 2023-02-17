class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*>s;
        vector<int>ans;
        if(root)
        s.push(root);
        while(!s.empty())
        {
            TreeNode* t=s.top();
            if(t->left)
            {
            s.push(t->left);
            t->left=NULL;
            }
            else
            {
                ans.push_back(t->val);
                s.pop();
                if(t->right)
                s.push(t->right);
            }
        }
        return ans;
    }
};
