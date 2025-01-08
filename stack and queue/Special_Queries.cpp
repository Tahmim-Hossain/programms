#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main() {
    int q;
    cin >> q;
    queue<string> Queue;

    while(q--)
    {
        int command;
        cin >> command;
        if (command == 0) {
            string name;
            cin >> name;
            Queue.push(name);
        } else if (command == 1) {
            if (!Queue.empty()) {
                cout << Queue.front() << endl;
                Queue.pop();
            } else {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}
