#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<vector<char>> grid;
vector<vector<bool>> visited;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
bool isValid(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == '.' && !visited[x][y]);
}

int dfs(int x, int y) {
    visited[x][y] = true;
    int roomCount = 1; 

    for (int i = 0; i < 4; i++) {
        int newX = x + dx[i];
        int newY = y + dy[i];

        if (isValid(newX, newY)) {
            roomCount += dfs(newX, newY); 
        }
    }

    return roomCount;
}

int main() {
    cin >> n >> m;
    grid.resize(n, vector<char>(m));
    visited.resize(n, vector<bool>(m, false));
    
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    
    vector<int> room;  

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            
            if (grid[i][j] == '.' && !visited[i][j]) {
                int roomCount = dfs(i, j);  
                room.push_back(roomCount);
            }
        }
    }
    if (room.empty()) {
        cout << 0 << endl;
    } else {
        
        sort(room.begin(), room.end());

        
        for (int count : room) {
            cout << count << " ";
        }
        cout << endl;
    }

    return 0;
}
