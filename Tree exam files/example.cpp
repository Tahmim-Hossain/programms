
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

Node* input_tree() {
    int val;
    cin >> val;
    Node *root = val == -1 ? NULL : new Node(val);
    queue<Node *> q;
    if (root) q.push(root);

    while (!q.empty()) {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        if (l != -1) {
            p->left = new Node(l);
            q.push(p->left);
        }
        if (r != -1) {
            p->right = new Node(r);
            q.push(p->right);
        }
    }
    return root;
}

vector<int> level_order(Node *root, bool leftToRight) {
    queue<Node *> q;
    vector<int> v;
    if (!root) return v;

    // Only push root's children to the queue
    if (leftToRight && root->left) q.push(root->left);
    if (!leftToRight && root->right) q.push(root->right);

    v.push_back(root->val);

    while (!q.empty()) {
        Node *f = q.front();
        q.pop();
        v.push_back(f->val);

        if (leftToRight) {
            if (f->left) q.push(f->left);
            else if (f->right) q.push(f->right);
        } else {
            if (f->right) q.push(f->right);
            else if (f->left) q.push(f->left);
        }
    }

    if (leftToRight) {
        reverse(v.begin(), v.end());
    }

    return v;
}

void print(Node *root) {
    vector<int> leftTraversal = level_order(root, true);
    vector<int> rightTraversal = level_order(root, false);

    if (leftTraversal == rightTraversal) {
        for (int val : leftTraversal) {
            cout << val << " ";
        }
    } else {
        for (int val : leftTraversal) {
            cout << val << " ";
        }
        for (int val : rightTraversal) {
            //if(val!=root->val) cout << val << " ";
        }
        for (int i = 1;i<rightTraversal.size();i++)
            cout << rightTraversal[i] << " ";
    }
}

int main() {
    Node *root = input_tree();
    print(root);
    return 0;
}

