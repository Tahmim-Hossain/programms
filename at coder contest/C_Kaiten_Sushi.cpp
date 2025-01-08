#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> people(n);  // (gourmet level, index)
    vector<pair<int, int>> sushi(m);   // (deliciousness, index)
    vector<int> result(m, -1);         // Initialize with -1

    for (int i = 0; i < n; i++) {
        cin >> people[i].first;
        people[i].second = i + 1;
    }

    for (int i = 0; i < m; i++) {
        cin >> sushi[i].first;
        sushi[i].second = i;
    }

    int i = 0;
    int j = 0;

    while (i < m && j < n) {
        if (sushi[i].first >= people[j].first) {
            result[sushi[i].second] = people[j].second;
            i++;
        } else {
            j++;
        }
    }

    for (int i = 0; i < m; i++) {
        cout << result[i] << endl;
    }

    return 0;
}
