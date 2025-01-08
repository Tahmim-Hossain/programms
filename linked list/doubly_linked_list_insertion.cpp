#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node *next;
        Node *prev;
        Node(int val)
        {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};
void insert_at_head(Node *&head,int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head->prev=newNode;
    head = newNode;
}
void insert_at_tail(Node *&tail,int val)
{
    Node *newNode = new Node(val);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void print_normal(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout << temp->val << endl;
        temp=temp->next;
    }
}
void print_reverse(Node *tail)
{
    Node *temp=tail;
    while(temp!=NULL)
    {
        cout<<temp->val << endl;
        temp = temp->prev;

    }
}
int main()
{
     Node *head = new Node(10);
    Node *a=new Node(20);
    Node *b = new Node(30);
    Node *tail = b;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;

    insert_at_head(head, 50);
    insert_at_tail(tail, 100);
    print_normal(head);
    print_reverse(tail);
    
    return 0;
}