#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node *left;
        Node *right;
        Node(int val)
        {
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};
Node* input_tree()
{
    int val;
    cin>>val;
    Node *root;
    if(val==-1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin>>l>>r;
        Node *myLeft;
        Node* myRight;
        if(l==-1)
            myLeft = NULL;
        else myLeft=new Node(l);

        if(r==-1)
            myRight = NULL;
        else
            myRight = new Node(r);
        p->left = myLeft;
        p->right=myRight;

        if(p->left)
        q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}
void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while(!q.empty())
    {
        Node *f=q.front();
        q.pop();
        //cout << f->val << " ";

        if(f->left!=NULL) q.push(f->left);
        if(f->right!=NULL)
            q.push(f->right);

    }
}
void print_descending(Node *root,int k) {
    if (!root) return;

    vector<int> leaf;
    queue<Node *> q;
    q.push(root);

    
    while (k--) {
        Node *node = q.front();
        q.pop();

        
        if (!node->left && !node->right) {
            leaf.push_back(node->val);
        }

        
        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
    }

    
    //sort(leaf.begin(),leaf.end(), greater<int>());

    
    for (int val : leaf) {
        cout << val << " ";
    }
}
void printLevel(Node* root, int k) {
    if (root == nullptr) {
        cout << "Invalid" << endl;
        return;
    }

    queue<Node*> q;
    q.push(root);
    int current_level = 0;
    bool found = false;

    while (!q.empty()) {
        int level_size = q.size();
        if (current_level == k) {
            while (level_size--) {
                Node* node = q.front();
                q.pop();
                cout << node->val << " ";
            }
            cout << endl;
            found = true;
            break;
        }

        while (level_size--) {
            Node* node = q.front();
            q.pop();
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        current_level++;
    }

    if (!found) {
        cout << "Invalid" << endl;
    }
}

int main()
{
    Node *root = input_tree();
    int k;
    cin >> k;
    //level_order(root);
    //print_descending(root, k);
    printLevel(root, k);

    return 0;
}