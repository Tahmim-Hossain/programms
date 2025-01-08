#include <bits/stdc++.h>
using namespace std;

vector<vector<bool>> vis;  
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};  
int n, m;                            
vector<vector<char>> a;              

bool valid(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m) 
        return false;
    if (a[i][j] == '-')              
        return false;
    return true;
}

int bfs(int si, int sj) {
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    int area = 0;                    
    
    while (!q.empty()) {
        pair<int, int> par = q.front();
        int x = par.first, y = par.second;
        q.pop();
        area++;                      
        for (int i = 0; i < 4; i++) {
            int ci = x + d[i].first;
            int cj = y + d[i].second;
            
            if (valid(ci, cj) && !vis[ci][cj]) {
                q.push({ci, cj});
                vis[ci][cj] = true;
            }
        }
    }
    return area;                     
}

int main() {
    
    cin >> n >> m;
    
    a.resize(n, vector<char>(m));
    vis.resize(n, vector<bool>(m, false));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    
    int minArea = INT_MAX;           
    bool found = false;     
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            
            if (a[i][j] == '.' && !vis[i][j]) {
                
                int area = bfs(i, j);
                minArea = min(minArea, area);
                found= true;
            }
        }
    }
    
    if (!found) {
        cout << -1 << endl;
    } else {
        cout << minArea << endl;
    }
    
    return 0;
}
