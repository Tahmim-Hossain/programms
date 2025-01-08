#include <bits/stdc++.h>
using namespace std;


bool is_diff(string s) {
    for (int i = 1; i < s.size(); i++) { 
        if (s[i] != s[i - 1]) { 
            return true;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        is_diff(s) ? cout<<'1'<<endl : cout<<(int)s.size()<<endl;
        //cout << (is_diff(s) ? '1' : to_string(s.size())) << endl;
    }

    return 0;
}

