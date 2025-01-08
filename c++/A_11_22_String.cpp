#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    string str;
    cin >> str;

    if (n % 2 != 0) {
        int x = (n + 1) / 2 - 1;  // Adjusting index for 0-based indexing
        if (str[x] != '/') {
            cout << "No" << endl;
            return 0;
        }

        string s1 = str.substr(0, n / 2);
        string s2 = str.substr((n / 2) + 1, n / 2);

        bool valid = true;

        for (char c : s1) {
            if (c != '1') {
                valid = false;
                break;
            }
        }

        for (char c : s2) {
            if (c != '2') {
                valid = false;
                break;
            }
        }

        if (valid) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        cout << "No" << endl;
    }

    return 0;
}
