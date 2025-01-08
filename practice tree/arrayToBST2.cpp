#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node(int data) : data(data), left(nullptr), right(nullptr) {};
};
node *insertBST(node* root,int data)
{
    if(root==nullptr)
    return new node(data);

    if(root->data>data)
    {
        root->left=insertBST(root->left,data);
    } 
    else root->right=insertBST(root->right,data);

    return root;
}
void inOrder(node* root)
{
    if(root==nullptr)
        return;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0;i<n;i++)
    cin>>arr[i];

    node *root = nullptr;
    root=insertBST(root,arr[0]);
    for(int i = 1;i<n;i++)
    {
        insertBST(root,arr[i]);
    }
    inOrder(root);
    cout << endl;
    
}
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        solve();

            return 0;
}