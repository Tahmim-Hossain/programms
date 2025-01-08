#include<bits/stdc++.h>
using namespace std;
class BrowserHistory
{
    public:
    class Node
    {
        public:
            string val;
            Node *next;
            Node *prev;
            Node(string val)
            {
                this->val = val;
                this->next = NULL;
                this->prev = NULL;
            }
    };
    Node *current = new Node(" ");
    BrowserHistory(string homepage)
    {
        current->val = homepage;
    }
    void visit(string url)
    {
        Node *newNode = new Node(url);
        current->next = newNode;
        newNode->prev = current;
        current = newNode;
    }
    string prev(int steps)
    {
        for(int i = 0; i < steps; i++)
        {
            if(current->prev!=NULL)
                {
                    current=current->prev;
                }
        }
        return current->val;
    }
    string next(int steps)
    {
        for(int i = 0; i < steps; i++)
        {
            if(current->next!=NULL)
            {
            current = current->next;
            }
        }
        return current->val;
    }
};
int main()
{
    return 0;
}