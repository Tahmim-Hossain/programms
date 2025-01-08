#include<bits/stdc++.h>
#define lli long long unsigned int
using namespace std;

void solve();
void fast_IO();

int main() {
    fast_IO();
    int t = 1;

    while(t--)
        solve();
    return 0;
}

void fast_IO() {
    ios::sync_with_stdio(false);
    cin.tie(0);
}

void solve() {
    fast_IO();
    int m, n, cnt = 0, max_cnt = 0;
    cin >> m >> n;
    vector<string> s(m);

    for (int i = 0; i < m; i++) {
        cin >> s[i];
    }

    for (int j = 0; j < n; j++) {
        bool all_o = true;
        for (int i = 0; i < m; i++) {
            if (s[i][j] != 'o') {
                all_o = false;
                break;
            }
        }
        if (all_o) {
            cnt++;
        } else {
            max_cnt = max(max_cnt, cnt);
            cnt = 0;  
        }
    }
    max_cnt = max(max_cnt, cnt);

    cout << max_cnt << endl;
}
