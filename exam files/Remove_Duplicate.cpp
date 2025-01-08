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

void removeDuplicates(Node* head) {
    Node* current = head;

    while (current != nullptr) {
        Node* runner = current;
        
        // Remove all nodes with the same value as current node
        while (runner->next != nullptr) {
            if (runner->next->data == current->data) {
                Node* temp = runner->next;
                runner->next = runner->next->next;
                delete temp;
            } else {
                runner = runner->next;
            }
        }
        
        current = current->next;
    }
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    removeDuplicates(head);
    printLinkedList(head);
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
