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
        head=newNode;
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    
}
void size(Node *head)
{
    Node *temp = head;
    int c = 0;
    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }
    cout<<c;
}
int main()
{
    int x;
    Node *head=NULL;
    while(true)
    {
        cin>>x;
        if(x==-1) break;
        insert_at_tail(head,x);
    }
    size(head);
    return 0;
}