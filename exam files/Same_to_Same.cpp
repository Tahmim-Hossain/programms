#include <iostream>
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
bool compare(Node *head1, Node *head2) {
    while (head1 != NULL && head2 != NULL) {
        if (head1->data != head2->data) {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return (head1 == NULL && head2 == NULL);
}

int main() {
    Node *head1 = NULL, *tail1 = NULL;
    Node *head2 = NULL, *tail2 = NULL;
    
    int val;
    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        insert_at_tail(head1, tail1, val);
    }
    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        insert_at_tail(head2, tail2, val);
    }
    if (compare(head1, head2)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
