#include <bits/stdc++.h>
using namespace std;

bool BeEliminated(const string &s) {
    stack<char> st;
    for (char ch : s) {
        if (ch == '0') {
            st.push(ch);
        } else if (ch == '1') {
            if (!st.empty() && st.top() == '0') {
                st.pop();
            } else {
                st.push(ch);
            }
        }
    }
    return st.empty();
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        if (BeEliminated(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

