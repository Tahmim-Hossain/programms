#include <iostream>
#include <vector>
#include <stack>
#include <unordered_set>
using namespace std;

void dfsIterative(const vector<vector<int>>& graph, int start) {
    stack<int> stk;
    unordered_set<int> visited;

    stk.push(start);

    while (!stk.empty()) {
        int node = stk.top();
        stk.pop();

        if (visited.find(node) == visited.end()) {
            cout << node << " ";
            visited.insert(node);

            // Add neighbors in reverse order to maintain consistent ordering
            for (auto it = graph[node].rbegin(); it != graph[node].rend(); ++it) {
                stk.push(*it);
            }
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

    cout << "DFS (Iterative): ";
    dfsIterative(graph, 0);

    return 0;
}
