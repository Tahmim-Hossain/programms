#include<bits/stdc++.h>
#include<list>
using namespace std;

void printList(const list<int>& lst) {
    cout << "L -> ";
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    cout << "R -> ";
    for (auto it = lst.rbegin(); it != lst.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    int Q;
    cin >> Q;

    list<int> lst;
    
    for (int i = 0; i < Q; ++i) {
        int X, V;
        cin >> X >> V;
        
        if (X == 0) {
            lst.push_front(V);
        } else if (X == 1) {
            lst.push_back(V);
        } else if (X == 2) {
            if (V < 0 || V >= lst.size()) {
                //cout << "Invalid" << endl;
            } else {
                auto it = lst.begin();
                advance(it, V);
                lst.erase(it);
            }
        }
        
        printList(lst);
    }
    
    return 0;
}

