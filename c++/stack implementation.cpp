#include <bits/stdc++.h>
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

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
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

    int back()
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
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.back() << endl; // Output: 30
    s.pop();
    cout << "Top element after pop: " << s.back() << endl; // Output: 20

    return 0;
}
