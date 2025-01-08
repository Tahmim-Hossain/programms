#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];

bool subset_sum(int n, int a[], int s) {
    if (s == 0)
        return true;

    if (n == 0)
        return false;

    if (dp[n][s] != -1)
        return dp[n][s];

    if (a[n - 1] <= s) {
        
        bool include_current = subset_sum(n - 1, a, s - a[n - 1]);
        bool exclude_current = subset_sum(n - 1, a, s);
        return dp[n][s] = include_current || exclude_current;
    } else {
        
        return dp[n][s] = subset_sum(n - 1, a, s);
    }
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
    int n;
    cin >> n;
    int a[n];
    int s,tar; 
    cin >> s;
    tar = 1000 - s;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    memset(dp, -1, sizeof(dp));
    if (subset_sum(n, a, tar))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    }
    return 0;
}
