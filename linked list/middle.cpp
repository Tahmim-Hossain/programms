#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node *next;
        Node(int val)
        {
            this->val = val;
            this->next = NULL;
        }
};
void insert_at_tail(Node *&head,int val)
{
    Node *newNode = new Node(val);
    Node *temp=head;
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next=newNode;
}
void insert_at_head(Node *&head,int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void print(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}
int size(Node *head)
{
    Node *temp = head;
    int c = 0;
    while(temp!=NULL)
    {
        c++;
        temp = temp->next;
    }
    //cout << c << endl;
    return c;
}
void mid_value(Node *head,int size)
{
    int i;
    Node *temp=head;
    int pos = size / 2;
    for(i=0;i<pos;i++)
    {
        temp = temp->next;
    }
    if(size%2!=0)
    {
        cout << temp->val << " ";
    }
    else
        cout << temp->val << " " << temp->next->val << endl;
}
int main()
{
    int x;
    Node *head = NULL;
    while(true)
    {
        cin >> x;
        if(x==-1)
            break;
        insert_at_tail(head, x);
    }
    int y=size(head);
    cout << y << endl;
    print(head);
    mid_value(head, size(head));
    return 0;
}