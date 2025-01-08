#include <bits/stdc++.h>
using namespace std;

const int N = 25;
char a[N][N];
bool vis[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}; // Directions: right, left, up, down
int n, m;

// Function to check if the position is valid
bool valid(int ci, int cj) {
    return ci >= 0 && ci < n && cj >= 0 && cj < m;
}

// DFS function to find the path
bool dfs(int si, int sj) {
    if (a[si][sj] == 'D') { // If we reach the exit
        return true;
    }

    vis[si][sj] = true; // Mark current cell as visited
    a[si][sj] = 'X';    // Mark the path

    // Try to move in the specified directions
    for (auto& direction : d) {
        int ci = si + direction.first;
        int cj = sj + direction.second;

        // Combine all conditions in one line
        if (valid(ci, cj) && !vis[ci][cj] && (a[ci][cj] == '.' || a[ci][cj] == 'D') && dfs(ci, cj)) {
            return true; // Exit found
        }
    }

    // If the exit was not found, unmark the current cell
    a[si][sj] = '.'; 
    return false; // Exit not found
}

int main() {
    cin >> n >> m; // Read dimensions of the maze

    int si, sj; // Starting coordinates for 'R'
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] == 'R') { // Find the starting position
                si = i;
                sj = j;
            }
        }
    }

    memset(vis, false, sizeof(vis)); // Initialize visited array

    // Attempt to find the path from R to D
    dfs(si, sj);

    // Output the final maze with the path marked
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }

    return 0;
}
