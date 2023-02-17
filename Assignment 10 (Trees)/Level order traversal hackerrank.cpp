void levelOrder(Node * root) {
        if (!root) return;
        
        queue<Node*> q;
        q.push(root);
        cout << root->data << " ";
        
        while (!q.empty()) {
            Node* curr = q.front();
            q.pop();
            if (curr->left) {
                cout << curr->left->data << " ";
                q.push(curr->left);
            } if (curr->right) {
                cout << curr->right->data << " ";
                q.push(curr->right);
            }
        }
    }
