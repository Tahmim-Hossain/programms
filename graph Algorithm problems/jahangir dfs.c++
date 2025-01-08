#include<bits/stdc++.h>
using namespace std;
const int N = 25;
char a[N][N];
bool vis[N][N];
int cnt = 0;
vector<pair<int,int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}; // corrected direction
int n, m;

bool valid(int ci, int cj) {
    return ci >= 0 && ci < n && cj >= 0 && cj < m;
}

void dfs(int si, int sj) {
    vis[si][sj] = true;
    cnt++;
    for (int i = 0; i < 4; i++) {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj] == '.') {
            dfs(ci, cj);
        }
    }
}

int main() {
    int t;
    cin >> t;
    int cs = 1;
    while(t--) {
        cin >> m >> n;  // corrected order for m (columns) and n (rows)
        int si, sj;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {  // corrected j loop for columns
                cin >> a[i][j];
                if (a[i][j] == '@') {
                    si = i;
                    sj = j;
                }
            }
        }
        cnt = 0;
        memset(vis, false, sizeof(vis[0]) * n);  // fixed size for memset
        dfs(si, sj);
        cout << "Case " << cs << ": " << cnt << endl;
        cs++;  // increment test case counter
    }
    return 0;
}
