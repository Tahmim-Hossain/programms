#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int s = 0,a[n];
    for (int i = 0; i < n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    if(s%2==0)
    {
        int sum = s / 2;
        int dp[n + 1][sum + 1];
        for(int i = 0; i <= sum; i++)
        {
            dp[0][i] = false;
        }
        for (int i = 1; i <= n;i++)
        {
            for (int j = 0; j <= sum;j++)
            {
                if(a[i-1]<=j)
                {
                    dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
                }
                else dp[i][j] = dp[i-1][j];
            }
        }
        if(dp[n][sum])
            cout << "YES" << endl;
        else cout << "NO"<< endl;
    }

        return 0;
}