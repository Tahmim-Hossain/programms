#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node *next;
    
    Node(int val) {
        data = val;
        next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, int value) {
    Node *newNode = new Node(value);
    if (head == NULL) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}
void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main()
{
    Node *head1 = NULL, *tail1 = NULL;
    set<int>s;
    while(true) 
    {
        int val;
        cin>>val;
        if(val == -1)
        {
            break;
        }
        s.insert(val);
    }
    for (auto it = s.begin(); it != s.end(); ++it) {
        //std::cout << *it << " ";
        insert_at_tail(head1, tail1,*it);
    }
    printLinkedList(head1);
    return 0;
}