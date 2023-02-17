int height(Node* root) {
        if (root == NULL)
            return -1;
        if (root->left == NULL && root->right == NULL)
            return 0;
        return 1+max(height(root->left), height(root->right));
    }
