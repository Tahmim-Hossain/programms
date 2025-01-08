#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
    
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail,int val)
{
    Node *newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev = tail;
    tail=tail->next;
}
void print_reverse(Node* tail)
{
    Node *tmp=tail;
    while(tmp!=NULL)
    {
        cout <<"R -> "<< tmp->data << " ";
        tmp=tmp->prev;
    }
    cout<<"\n";
}
void print_normal(Node *head)
{
    Node *tmp=head;
    while(tmp!=NULL)
    {
        cout <<"L -> "<< tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while(true)
    {
        cin >> val;
        if(val==-1)
            break;
        insert_tail(head, tail, val);
    }
    print_normal(head);
    print_reverse(tail);
    return 0;
}