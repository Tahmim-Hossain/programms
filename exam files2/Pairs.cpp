#include <bits/stdc++.h>
using namespace std;

typedef pair<string, int> int_pair;
bool Comparator(const int_pair &a, const int_pair &b) {
    if (a.first == b.first) {
        return a.second > b.second;
    } else {
        return a.first < b.first;
    }
}

int main() {
    int n;
    cin >> n;

    vector<int_pair> pairs(n);

    for (int i = 0; i < n; i++) {
        cin >> pairs[i].first >> pairs[i].second;
    }

    sort(pairs.begin(), pairs.end(), Comparator);

    for (const auto &p : pairs) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
