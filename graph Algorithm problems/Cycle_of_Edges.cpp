#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int par[N];        
int level[N];      

void dsu_initialize(int n) {
    for (int i = 1; i <= n; i++) {
        par[i] = -1;  
        level[i] = 0; 
            }
}

int dsu_find(int node) {
    if (par[node] == -1) return node;
    return par[node] = dsu_find(par[node]); 
}

void dsu_union_by_level(int node1, int node2) {
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    
    if (leaderA != leaderB) {
        if (level[leaderA] > level[leaderB]) {
            par[leaderB] = leaderA;
        } else if (level[leaderB] > level[leaderA]) {
            par[leaderA] = leaderB;
        } else {
            par[leaderA] = leaderB;
            level[leaderB]++;
        }
    }
}

int count_cycle_edges(int n, int e, vector<pair<int, int>>& edges) {
    dsu_initialize(n);
    int cycleEdges = 0; 
    
    for (auto& edge : edges) {
        int u = edge.first;
        int v = edge.second;
        
        if (dsu_find(u) == dsu_find(v)) {
            cycleEdges++;
        } else {
            dsu_union_by_level(u, v); 
        }
    }
    
    return cycleEdges;
}

int main() {
    int n, e;
    cin >> n >> e;  
    
    vector<pair<int, int>> edges(e); 
    
    
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        edges[i] = {u, v};
    }
    
    
    cout << count_cycle_edges(n, e, edges) << endl;

    return 0;
}
