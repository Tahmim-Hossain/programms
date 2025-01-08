
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int par[N];         
int group_size[N];  
int level[N];       


void dsu_initialize(int n) {
    for (int i = 0; i < n; i++) {
        par[i] = -1;
        group_size[i] = 1;
        level[i] = 0;
    }
}


int dsu_find(int node) {
    if (par[node] == -1)
        return node;
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


class Edge {
public:
    int u, v, w;
    Edge(int u, int v, int w) {
        this->u = u - 1; 
        this->v = v - 1;  
        this->w = w;
    }
};


bool cmp(Edge a, Edge b) {
    return a.w < b.w;
}

int main() {
    int n, e;
    cin >> n >> e;  
    
    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }

    dsu_initialize(n);  

    vector<Edge> edgeList;  

    
    for (int i = 0; i < e; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edgeList.push_back(Edge(u, v, w));  
    }

    
    sort(edgeList.begin(), edgeList.end(), cmp);

    int totalCost = 0;
    int edgesUsed = 0;

    
    for (Edge ed : edgeList) {
        int leaderU = dsu_find(ed.u);
        int leaderV = dsu_find(ed.v);

        
        if (leaderU != leaderV) {
            dsu_union_by_level(ed.u, ed.v);
            totalCost += ed.w;
            edgesUsed++;

        
            if (edgesUsed == n - 1) {
                break;
            }
        }
    }

    
    if (edgesUsed == n - 1) {
        cout << totalCost << endl;  
    } else {
        cout << -1 << endl;  
    }

    return 0;
}
