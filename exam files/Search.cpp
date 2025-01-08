#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

class LinkedList {
public:
    Node *head;
    Node *tail;

    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void insert_at_tail(int v) {
        Node *newNode = new Node(v);
        if (tail == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int find_index(int x) {
        Node *tmp = head;
        int index = 0;
        while (tmp != nullptr) {
            if (tmp->val == x) {
                return index;
            }
            index++;
            tmp = tmp->next;
        }
        return -1;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        LinkedList list;
        int val;

        while (true) {
            cin >> val;
            if (val == -1) {
                break;
            }
            list.insert_at_tail(val);
        }

        int element;
        cin >> element;

        cout << list.find_index(element) << endl;
    }

    return 0;
}
