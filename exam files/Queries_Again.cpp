#include <bits/stdc++.h>
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

void print_reverse(Node* tail) {
    cout << "R -> ";
    Node *tmp = tail;
    while (tmp != NULL) {
        cout << tmp->data << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void print_normal(Node *head) {
    cout << "L -> ";
    Node *tmp = head;
    while (tmp != NULL) {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_list(Node *head, Node *tail) {
    print_normal(head);
    print_reverse(tail);
}

void insert_at_index(Node *&head, Node *&tail, int index, int val, int &size) {
    if (index < 0 || index > size) {
        cout << "Invalid" << endl;
        return;
    }
    
    Node *newNode = new Node(val);
    if (index == 0) {
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    } else if (index == size) {
        if (tail == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    } else {
        Node *current = head;
        for (int i = 0; i < index - 1; ++i) {
            current = current->next;
        }
        newNode->next = current->next;
        newNode->prev = current;
        current->next->prev = newNode;
        current->next = newNode;
    }
    size++;
    print_list(head, tail);
}

int main() {
    int Q;
    cin >> Q;

    Node *head = NULL;
    Node *tail = NULL;
    int size = 0;

    for (int i = 0; i < Q; ++i) {
        int X, V;
        cin >> X >> V;
        insert_at_index(head, tail, X, V, size);
    }

    return 0;
}
