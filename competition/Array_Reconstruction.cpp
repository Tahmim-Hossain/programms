#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> remaining(n - 2);
        long long after = 0;
        
        for (int i = 0; i < n - 2; i++) {
            cin >> remaining[i];
            after += remaining[i];
        }
        
        long long before;
        cin >> before;
        
        long long delta = before - after;
        
        cout << delta + 1 << endl;  
    }
    
    return 0;
}
