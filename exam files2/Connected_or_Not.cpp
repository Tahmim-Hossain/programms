#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    
    vector<vector<int>> adj_matrix(n, vector<int>(n, 0));

    
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj_matrix[u][v] = 1;  
    }

    int q;
    cin >> q;


    for (int i = 0; i < q; ++i) {
        int u, v;
        cin >> u >> v;
        
        
        if (u == v || adj_matrix[u][v] == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

