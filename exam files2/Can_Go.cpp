#include <bits/stdc++.h>
using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};


bool isValid(int x, int y, int n, int m, const vector<vector<char>>& grid, vector<vector<bool>>& visited) {
    return (x >= 0 && x < n && y >= 0 && y < m && !visited[x][y] && (grid[x][y] == '.' || grid[x][y] == 'B'));
}
bool bfs(int startX, int startY, int n, int m, const vector<vector<char>>& grid) {
    queue<pair<int, int>> q;
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    
    q.push({startX, startY});
    visited[startX][startY] = true;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if (grid[x][y] == 'B') {
            return true;
        }

        for (int i = 0; i < 4; i++) {
            int newX = x + dx[i];
            int newY = y + dy[i];

            
            if (isValid(newX, newY, n, m, grid, visited)) {
                visited[newX][newY] = true;
                q.push({newX, newY});
            }
        }
    }

    
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char>(m));

    int startX = -1, startY = -1;

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'A') {
                startX = i;
                startY = j;
            }
        }
    }
    if (bfs(startX, startY, n, m, grid)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
