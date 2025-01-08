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
    while(temp->next != NULL)
    {
        temp=temp->next;    
    }
    temp->next=newNode;
}
void insert_at_head(Node *&head,int val)
{
    Node *newNode = new Node(val);
    newNode->next=head;
    head=newNode;
}
void sort(Node *&head)
{
    Node *i,*j;
    int temp;
    for (i = head;i!=NULL;i=i->next)
    {
        for (j = head;j!=NULL;j=j->next)
        {
            if(i->val<j->val)
                {
                    temp = i->val;
                    i->val = j->val;
                    j->val = temp;
                }
        }
    }
}
bool isDuplicate(Node *head)
{
    Node *temp = head;
    bool flag = false;
    while(temp->next!= NULL)
    {
        if(temp->val==temp->next->val)
            {
                flag = true;
                break;
            }
            temp=temp->next;
    }
    return flag;
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
    Node *head = NULL;
    int x;
    while(true)
    {
        cin >> x;
        if(x==-1) break;
        insert_at_tail(head,x);
    }
    sort(head);
    if(isDuplicate(head)) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    print(head);
    return 0;
}