#include <bits/stdc++.h>
using namespace std;

vector<int> vLeft;
vector<int> vRight;



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



Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        // work
        int l, r;
        cin >> l >> r;
        Node *leftNode;
        Node *rightNode;
        if (l == -1)
        {
            leftNode = NULL;
        }
        else
        {
            leftNode = new Node(l);
        }
        if (r == -1)
        {
            rightNode = NULL;
        }
        else
        {
            rightNode = new Node(r);
        }

        q.front()->left = leftNode;
        q.front()->right = rightNode;

        // get children
        if (q.front()->left)
        {
            q.push(q.front()->left);
        }

        if (q.front()->right)
        {
            q.push(q.front()->right);
        }

        // pop
        q.pop();
    }

    return root;
}



int leftSide(Node *root)
{
    if (root->left == NULL && root->right == NULL)
    {
        vLeft.push_back(root->val);
        return 0;
    }

    if (root->left)
        leftSide(root->left);
    else
        leftSide(root->right);

    vLeft.push_back(root->val);
    return 0;
}



int rightSide(Node *root) 
{
    if (root->left == NULL && root->right == NULL)
    {
        vRight.push_back(root->val);
        return 0;
    }

    if (root->right)
        rightSide(root->right);
    else
        rightSide(root->left);

    vRight.push_back(root->val);
    return 0;
}


int main()
{
    Node *root = input_tree();
    if (root->left == NULL && root->right == NULL)
    {
        cout << root->val << " ";
        return 0;
    }
    if (root->left != NULL && root->right == NULL) 
    {
        leftSide(root); // call function
        for (int x : vLeft)
        {
            cout << x << " ";
        }
    }
    else if (root->right != NULL && root->left == NULL) 
    {
        rightSide(root); 
        reverse(vRight.begin(), vRight.end());
        for (int x : vRight)
        {
            cout << x << " ";
        }
    }
    else 
    {
        leftSide(root);
        rightSide(root);

        vLeft.pop_back(); 
        reverse(vRight.begin(), vRight.end());



        for (int x : vLeft)
            cout << x << " ";
        for (int x : vRight)
            cout << x << " ";
    }
    return 0;
}
