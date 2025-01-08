#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> balls(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> balls[i].first;
        balls[i].second = i + 1;  
    }
    
    sort(balls.begin(), balls.end());
    
    for (int i = 0; i < n / 2; ++i) {
        cout << balls[i].second << " " << balls[n - 1 - i].second << endl;
    }
    
    return 0;
}
