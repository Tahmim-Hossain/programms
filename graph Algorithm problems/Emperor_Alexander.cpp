#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int parent[N];
int gsize[N];
class Edge{
    public:
    int u, v, w;
    Edge(int u, int v, int w){
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
int find(int node){
    if(parent[node] == -1) return node;
    int leader = find(parent[node]);
    parent[node] = leader;
    return leader;
}
void union1(int node1, int node2){
    int leaderA = find(node1);
    int leaderB = find(node2);
    if(gsize[leaderA] > gsize[leaderB]){
        parent[leaderB] = leaderA;
        gsize[leaderA] += gsize[leaderB];
    }
    else{
        parent[leaderA] = leaderB;
        gsize[leaderB] += gsize[leaderA];
    }
}


bool cmp(Edge a, Edge b){
    return a.w < b.w;
}
void dsu(int n){
    for(int i=1; i<=n; i++){
        parent[i] = -1;
        gsize[i] = 1; 
    }
}
int main(){
    int n , e;
    cin >> n >> e;
    dsu(n);
    vector<Edge> edge;
    int ar[n]={0};
    long long res = 0;
    while(e--){
        int u, v, w;
        cin >> u >> v >> w;
        ar[u-1] = 1;
        ar[v-1] = 1;
        edge.push_back(Edge(u, v, w));
    }
    for(int i=0; i<n; i++){
        if(ar[i] == 0){
            cout << "Not Possible";
            return 0;
        }
    }
    int res1 = 0;
    sort(edge.begin(), edge.end(), cmp);
    for(Edge ed : edge){
        int leaderU = find(ed.u);
        int leaderV = find(ed.v);
        if(leaderU == leaderV){
            res1++;
        }
        else{
            union1(ed.u, ed.v);
            res += ed.w;
        }
    }
    cout << res1 << " " << res;
    return 0;
}