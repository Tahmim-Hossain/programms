#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, bool> memo;

bool is_possible(int n, int ans) {
    
    if (memo.find(ans) != memo.end()) {
        return memo[ans];
    }

    if (ans == n) {
        return true; 
    }
    if (ans > n) {
        return false;
    }

    
    bool result = is_possible(n, ans + 3) || is_possible(n, ans * 2);

    memo[ans] = result;
    return result;
}

int main() {
    int t; 
    cin >> t; 

    while (t--) {
        int n;
        cin >> n; 
        memo.clear(); 
        cout << (is_possible(n, 1) ? "YES" : "NO") << endl; 
    }

    return 0;
}

