#include <bits/stdc++.h>
using namespace std;
string replace_with_hash(string S, string X) {
    int pos = 0;
    while ((pos = S.find(X, pos)) != string::npos) {
        S.replace(pos, X.length(), "#");
        pos += 1;
    }
    return S;
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        string S, X;
        cin >> S >> X;
        string new_S = replace_with_hash(S, X);
        
        cout << new_S << endl;
    }

    return 0;
}