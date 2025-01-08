#include <bits/stdc++.h>
using namespace std;

string ret(string &num) {
    int last_index = -1;
    for (int i = num.size() - 1; i >= 0; i--) {
        if ((num[i] - '0') % 2 == 1) {
            last_index = i;
            break;
        }
    }
    if (last_index == -1) return "\"\""; // No odd number found

    string str =  num.substr(0, last_index + 1) + "\"";
    return str;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    string str = ret(s);
    cout << str << endl;

    return 0;
}
