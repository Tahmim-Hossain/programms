#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;

    unordered_map<int, int> b;
    map<int, set<int>> c;
    multiset<int> d;

    while (a--) {
        int e;
        cin >> e;

        if (e == 1) {
            int f;
            cin >> f;

            d.insert(f);

            if (b[f] > 0) {
                c[b[f]].erase(f);
                if (c[b[f]].empty()) {
                    c.erase(b[f]);
                }
            }

            b[f]++;
            c[b[f]].insert(f);
        } 
        else if (e == 2) {
            if (d.empty()) {
                cout << "empty\n";
            } 
            else {
                auto g = c.rbegin();
                int h = g->first;
                int i = *(g->second.rbegin());

                cout << i << "\n";

                int j = max(h - 1, 1);
                for (int k = 0; k < j; ++k) {
                    d.erase(d.find(i));
                }

                c[h].erase(i);
                if (c[h].empty()) {
                    c.erase(h);
                }

                b[i] -= j;

                if (b[i] > 0) {
                    c[b[i]].insert(i);
                }
            }
        }
    }

    return 0;
}

