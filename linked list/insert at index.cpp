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
    Node *temp = head;
    if(head==NULL)
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
void insert_at_position(Node *&head,int val,int pos)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    int i;
    for (i = 0;i<pos-1;i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
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
void insert_at_head(Node *&head,int val)
{
    Node *newNode = new Node(val);
    newNode->next=head;
    head=newNode;
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

int main()
{
    int val, pos;
    Node *head=NULL;
    while(true)
    {
        cin>>val>>pos;
        if(pos==0)
        {
            insert_at_head(head,val);
        }
        else if(pos>size(head) || pos<size(head))
            break;
            else 
            {
                insert_at_position(head, val, pos);
            }
    }
    print(head);
    return 0;
}