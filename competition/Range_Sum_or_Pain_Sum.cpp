#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, q;
    cin >> n >> q;

    while (q--) {
        long long l, r, sum = 0;
        cin >> l >> r;
        l--;

        long long right = (((r + 1) / 2) * ((r + 1) / 2 + 1));
        if (r % 2 == 1) right -= (r + 1) / 2;
        long long left = (((l + 1) / 2) * ((l + 1) / 2 + 1));
        if (l % 2 == 1) left -= (l + 1) / 2;

        cout << right - left << endl;
    }
    return 0;
}




