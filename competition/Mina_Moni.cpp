#include <bits/stdc++.h>
using namespace std;

int a_diff(int a, vector<int>& b) {
    int c = accumulate(b.begin(), b.end(), 0);
    int d = c / 2;
    int e = a / 2;

    vector<vector<bool>> f(e + 1, vector<bool>(d + 1, false));
    f[0][0] = true;

    for (int g : b) {
        for (int h = e; h > 0; --h) {
            for (int i = d; i >= g; --i) {
                if (f[h - 1][i - g]) {
                    f[h][i] = true;
                }
            }
        }
    }

    for (int j = d; j >= 0; --j) {
        if (f[e][j]) {
            int k = c - j;
            return abs(j - k);
        }
    }

    return c;
}

int main() {
    int a;
    cin >> a;

    while (a--) {
        int b;
        cin >> b;

        vector<int> c(b);
        for (int d = 0; d < b; d++) {
            cin >> c[d];
        }

        cout << a_diff(b, c) << endl;
    }

    return 0;
}
