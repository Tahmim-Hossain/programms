#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    char val;
    Node *next;
    Node(char val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(char val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = tail->next;
        }
    }

    void pop()
    {
        if (sz == 0)
            return; // Handle empty stack case

        if (sz == 1)
        {
            delete head;
            head = NULL;
            tail = NULL;
        }
        else
        {
            Node *temp = head;
            while (temp->next != tail)
            {
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = NULL;
        }
        sz--;
    }

    char back()
    {
        if (sz == 0)
            throw out_of_range("Stack is empty"); // Handle empty stack case
        return tail->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return sz == 0;
    }
};

int main()
{
    myStack s;
    string sr;
    cin >> sr;
    int x = sr.length();
    for (int i = 0; i < x; i++)
    {
        s.push(sr[i]);
    }
    while(!s.empty())
    {
        cout<<s.back()<<endl;
        s.pop();
    }

    return 0;
}