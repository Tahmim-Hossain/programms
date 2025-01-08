#include <iostream>
#include <stack>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

void append(Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);
    Node* last = *head_ref;
    if (*head_ref == nullptr) {
        *head_ref = new_node;
        return;
    }
    while (last->next != nullptr) {
        last = last->next;
    }
    last->next = new_node;
    new_node->prev = last;
}

bool isPalindrome(Node* head) {
    if (!head) return true;

    Node* slow = head;
    Node* fast = head;
    stack<int> first_half;
    while (fast != nullptr && fast->next != nullptr) {
        first_half.push(slow->data);
        slow = slow->next;
        fast = fast->next->next;
    }
    if (fast != nullptr) {
        slow = slow->next;
    }
    while (slow != nullptr) {
        if (first_half.top() != slow->data) {
            return false;
        }
        first_half.pop();
        slow = slow->next;
    }

    return true;
}

int main() {
    Node* head = nullptr;
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
