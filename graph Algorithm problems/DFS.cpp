#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void dfsRecursive(const vector<vector<int>>& graph, int node, unordered_set<int>& visited) {
    if (visited.find(node) == visited.end()) {
        cout << node << " ";
        visited.insert(node);
        for (int neighbor : graph[node]) {
            dfsRecursive(graph, neighbor, visited);
        }
    }
}

int main() {
    // Graph as an adjacency list
    vector<vector<int>> graph = {
        {1, 2},     // Node 0 -> Nodes 1, 2
        {3, 4},     // Node 1 -> Nodes 3, 4
        {5},        // Node 2 -> Node 5
        {},         // Node 3
        {},         // Node 4
        {}          // Node 5
    };

    unordered_set<int> visited;
    cout << "DFS (Recursive): ";
    dfsRecursive(graph, 0, visited);

    return 0;
}
