#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *left, *right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree() {
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root) q.push(root);

    while (!q.empty()) {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *myLeft = (l == -1) ? NULL : new Node(l);
        Node *myRight = (r == -1) ? NULL : new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left) q.push(p->left);
        if (p->right) q.push(p->right);
    }

    return root;
}


void print_descending(Node *root) {
    if (!root) return;

    vector<int> leaf;
    queue<Node *> q;
    q.push(root);

    
    while (!q.empty()) {
        Node *node = q.front();
        q.pop();

        
        if (!node->left && !node->right) {
            leaf.push_back(node->val);
        }

        
        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
    }

    
    sort(leaf.begin(),leaf.end(), greater<int>());

    
    for (int val : leaf) {
        cout << val << " ";
    }
}

int main() {
    Node *root = input_tree();
    print_descending(root);
    return 0;
}
