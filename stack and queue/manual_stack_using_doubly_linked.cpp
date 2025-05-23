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
class myStack
{
    public:
    Node *head=NULL;
    Node *tail=NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if(head==NULL)
        {
            head = newNode;
            tail=newNode;
            return;
        }
        tail->next =newNode;
        newNode->prev = tail;
        tail=newNode;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if(tail==NULL)
            head = NULL;
            else
                tail->next=NULL;
            delete deleteNode;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz==0)
            return true;
            else
                return false;
    }
};
int main()
{
    myStack st;
    st.push(20);
    st.push(10);
    st.pop();
    cout<<st.top()<<endl;

    return 0;
}