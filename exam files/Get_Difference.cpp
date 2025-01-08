#include <iostream>
#include <climits>
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

void insert_at_tail(Node *&head, Node *&tail, int v) {
    Node *newNode = new Node(v);
    if (head == NULL) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

int main() {
    int val;
    int max_val = INT_MIN, min_val = INT_MAX;
    Node *head = NULL, *tail = NULL;
    
    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    Node *current = head;
    while (current != NULL) {
        if (current->val > max_val) {
            max_val = current->val;
        }
        if (current->val < min_val) {
            min_val = current->val;
        }
        current = current->next;
    }
    
    if (head == NULL) {
        cout << "0" << endl;
    } else {
        cout << max_val - min_val << endl;
    }

    return 0;
}


