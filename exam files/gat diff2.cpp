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
void insert_at_tail(Node *&head,int v)
{
    
    
        
    Node *newNode = new Node(v);
    if(head == NULL)
    {
        head=newNode;
        return;
    } 
    Node *tmp = head;
    while(tmp->next != NULL)
    {
        
        tmp = tmp->next;
    }
    
    tmp->next = newNode;
    
}
int main()
{
    int val;
    int max=INT_MIN,min=INT_MAX,c=0;
    Node *head = NULL;
    while(true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        c++;
        if(val > max)
        {
            max = val;
        }
        else if(val < min)
        {
            min = val;
        }
        insert_at_tail(head,val);
    }
    // cout<<max-min<< endl;
    // cout<<c<<endl;
    if(c > 1)
    {
        cout<<max-min<< endl;
    }
    else 
    {
        cout << "0" << endl;
    }
    return 0;
}