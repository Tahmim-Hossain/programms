#include <bits/stdc++.h>
using namespace std;

const int maxN = 5001;
const int logN = 14;
vector<int> tree[maxN];
int parent[maxN][logN], depth[maxN];
multiset<int> values[maxN];

void dfs(int node, int par) {
    parent[node][0] = par;
    for (int i = 1; i < logN; i++) {
        if (parent[node][i - 1] != -1) {
            parent[node][i] = parent[parent[node][i - 1]][i - 1];
        } else {
            parent[node][i] = -1;
        }
    }
    for (int child : tree[node]) {
        if (child != par) {
            depth[child] = depth[node] + 1;
            dfs(child, node);
        }
    }
}

int lca(int u, int v) {
    if (depth[u] < depth[v]) swap(u, v);
    for (int i = logN - 1; i >= 0; i--) {
        if (parent[u][i] != -1 && depth[parent[u][i]] >= depth[v]) {
            u = parent[u][i];
        }
    }
    if (u == v) return u;
    for (int i = logN - 1; i >= 0; i--) {
        if (parent[u][i] != parent[v][i]) {
            u = parent[u][i];
            v = parent[v][i];
        }
    }
    return parent[u][0];
}

void collect_values(int u, int ancestor, multiset<int>& collected) {
    while (u != ancestor) {
        collected.insert(values[u].begin(), values[u].end());
        u = parent[u][0];
    }
}

int find_smallest(int u, int v, int k) {
    int ancestor = lca(u, v);
    multiset<int> collected;
    collect_values(u, ancestor, collected);
    collect_values(v, ancestor, collected);
    collected.insert(values[ancestor].begin(), values[ancestor].end());
    if (collected.size() < k) return -1;
    auto it = collected.begin();
    advance(it, k - 1);
    return *it;
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    memset(parent, -1, sizeof(parent));
    depth[1] = 0;
    dfs(1, -1);
    
    int q;
    cin >> q;
    
    while (q--) {
        string query;
        cin >> query;
        
        if (query == "insert") {
            int u, x;
            cin >> u >> x;
            values[u].insert(x);
        } 
        else if (query == "delete") {
            int u, x;
            cin >> u >> x;
            auto it = values[u].find(x);
            if (it != values[u].end()) {
                values[u].erase(it);
            }
        } 
        else if (query == "find") {
            int u, v, k;
            cin >> u >> v >> k;
            cout << find_smallest(u, v, k) << endl;
        }
    }
    
    return 0;
}
