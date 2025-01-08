#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node *left;
        Node *right;
        Node(int val) {
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

// Function to convert sorted array to balanced BST
Node* convert(int a[], int l, int r) {
    if (l > r) return NULL; // Base case for invalid range
    
    int mid = (l + r) / 2;
    Node* root = new Node(a[mid]);
    
    root->left = convert(a, l, mid - 1);
    root->right = convert(a, mid + 1, r);
    
    return root;
}

// Function to perform level order traversal of the tree
void level_order(Node *root) {
    if (root == NULL) return;

    queue<Node *> q;
    q.push(root);
    while (!q.empty()) {
        Node *f = q.front();
        q.pop();
        cout << f->val << " ";
        
        if (f->left != NULL) q.push(f->left);
        if (f->right != NULL) q.push(f->right);
    }
}

int main() {
    int n;
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    // Convert array to balanced BST
    Node *root = convert(a, 0, n - 1);

    // Level order traversal
    level_order(root);

    return 0;
}
