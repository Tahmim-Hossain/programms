#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
        }
        if(s % 2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }
        
        int sum = s / 2;
        
        vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));
        
        for(int i = 0; i <= n; i++) 
        {
            dp[i][0] = true;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= sum; j++)
            {
                if (a[i - 1] <= j)
                {
                    dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        
        
        if(dp[n][sum])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
