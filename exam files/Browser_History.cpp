#include<bits/stdc++.h>
using namespace std;

class BrowserHistory {
public:
    class Node {
    public:
        string val;
        Node *next;
        Node *prev;
        Node(string val) {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
    };

    Node *head;
    Node *current;

    BrowserHistory() {
        head = nullptr;
        current = nullptr;
    }

    void addAddress(string homepage) {
        Node *newNode = new Node(homepage);
        if (!head) {
            head = newNode;
            current = newNode;
        } else {
            current->next = newNode;
            newNode->prev = current;
            current = newNode;
        }
    }

    void visit(string url) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->val == url) {
                current = temp;
                cout << current->val << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Not Available" << endl;
    }

    void prev() {
        if (current && current->prev) {
            current = current->prev;
            cout << current->val << endl;
        } else {
            cout << "Not Available" << endl;
        }
    }

    void next() {
        if (current && current->next) {
            current = current->next;
            cout << current->val << endl;
        } else {
            cout << "Not Available" << endl;
        }
    }
};

int main() {
    BrowserHistory browserHistory;
    string address;
    while (cin >> address && address != "end") {
        browserHistory.addAddress(address);
    }
    browserHistory.current = browserHistory.head;
    int Q;
    cin >> Q;
    cin.ignore();
    for (int i = 0; i < Q; ++i) {
        string command;
        getline(cin, command);

        if (command.substr(0, 6) == "visit ") {
            string addr_to_visit = command.substr(6);
            browserHistory.visit(addr_to_visit);
        } else if (command == "next") {
            browserHistory.next();
        } else if (command == "prev") {
            browserHistory.prev();
        }
    }

    return 0;
}
