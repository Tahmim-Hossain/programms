#include<bits/stdc++.h>
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
void append(Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);
    Node* last = *head_ref;
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
    new_node->prev = last;
}

bool isPalindrome(Node* head) {
    if (!head) return true;

    Node* left = head;
    Node* right = head;

    while (right->next != NULL) {
        right = right->next;
    }
    while (left != right && left->prev != right) {
        if (left->data != right->data) {
            return false;
        }
        left = left->next;
        right = right->prev;
    }
    return true;
}

int main() {
    Node* head = NULL;
    int value;
    while (true) {
        cin >> value;
        if (value == -1) break;
        append(&head, value);
    }

    if (isPalindrome(head)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
