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
void insert_at_head(Node *&head,int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    newNode=head;
}
void print_linked_list(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout << temp->val << " ";
        temp=temp->next;
    }
}
void insert_at_tail(Node *&head,int val)
{
    Node *newNode = new Node(val);
    Node *temp=head;
    if(head==NULL)
    {
        head=newNode;
        return;     //return is for terminating infinity loop.
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    
}
void insert_at_any_position(Node *&head,int val,int pos)
{
    Node *temp = head;
    Node *newNode = new Node(val);
    for (int i = 1; i <= pos - 1;i++)
    {
        temp=temp->next;
    }
    newNode->next = temp->next;
    temp->next=newNode;
}
int main()
{
    int op;
    cin >> op;
    Node *head = NULL;
    if(op==1)
    {
        int val;
        cin>>val;
        insert_at_tail(head, val);

    }
    else if(op==2)
    {
        int pos, val;
        cin>>pos>>val;
        insert_at_any_position(head,val,pos);
    }
    else if(op==3) print_linked_list(head);
    return 0;
}