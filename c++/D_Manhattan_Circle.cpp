#include<bits/stdc++.h>
using namespace std;

pair<int, int> find_center(int n, int m, vector<string>& grid) {
    int min_x = INT_MAX, min_y = INT_MAX;
    int max_x = INT_MIN, max_y = INT_MIN;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == '#') {
                if (i < min_x) min_x = i;
                if (i > max_x) max_x = i;
                if (j < min_y) min_y = j;
                if (j > max_y) max_y = j;
            }
        }
    }
    int center_x = (min_x + max_x) / 2 + 1;
    int center_y = (min_y + max_y) / 2 + 1;

    return {center_x, center_y};
}

int main() {
    int t;
    cin >> t;

    vector<pair<int, int>> results;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> grid(n);
        for (int i = 0; i < n; ++i) {
            cin >> grid[i];
        }

        results.push_back(find_center(n, m, grid));
    }

    for (const auto& result : results) {
        cout << result.first << " " << result.second << endl;
    }

    return 0;
}
