#include<bits/stdc++.h>
using namespace std;
void solve();
class Node
{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int val)
        {
            data=val;
            this->left = NULL;
            this->right = NULL;
        }
};
Node * arrayToBST(const int arr[],int start,int end)
{
    if(start>end)
        return NULL;

    int mid=(start+end)/2;
    Node *root = new Node(arr[mid]);

    root->left = arrayToBST(arr, start, mid - 1);
    root->right = arrayToBST(arr,mid+1, end);

    return root;
}
Node * arrayToBST(const int arr[],int n)
{
    return arrayToBST(arr,0,n-1);
}
void inOrder(Node *root)
{
    if(root==NULL)
        return;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
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
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    //Node *root = NULL;
    for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        Node * root=arrayToBST(arr,n);

        inOrder(root);
        cout << endl;
}