#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node *&head, int v) {
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node *&head, int v) {
    Node *newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void delete_at_index(Node *&head, int index) {
    if (head == NULL) return;
    if (index == 0) {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node *current = head;
    for (int i = 0; current != NULL && i < index - 1; i++) {
        current = current->next;
    }
    if (current == NULL || current->next == NULL) return;
    Node *next = current->next->next;
    delete current->next;
    current->next = next;
}

void print_linked_list(Node *head) {
    Node *tmp = head;
    while (tmp != NULL) {
        cout << tmp->val;
        if (tmp->next != NULL) {
            cout << " ";
        }
        tmp = tmp->next;
    }
    cout << endl;
}

int main() {
    int Q;
    cin >> Q;
    Node *head = NULL;
    for (int i = 0; i < Q; i++) {
        int X, V;
        cin >> X >> V;
        if (X == 0) {
            insert_at_head(head, V);
        } else if (X == 1) {
            insert_at_tail(head, V);
        } else if (X == 2) {
            delete_at_index(head, V);
        }
        print_linked_list(head);
    }
    return 0;
}

