#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int m, n;
        cin>>m>>n;
        int arr[m][n];
        for (int i = 0; i < m;i++)
        {
            for(int j = 0; j < n;j++)
            {
                cin >> arr[i][j];
            }
        }
        long long res = LLONG_MIN;
        // long long int temp=0;
        for (int i = 0;i<m;i++)
        {
            for(int j = 0; j < n;j++)
            {
                long long temp = arr[i][j];
                for (int p = i - 1,q = j - 1; q >= 0 && p >= 0; p--, q--)
                {
                    temp += arr[p][q];
                }
                for (int p = i - 1,q = j + 1; q <n && p >= 0; p--, q++)
                {
                    temp += arr[p][q];
                }
                for (int p = i + 1,q = j - 1; q >= 0 && p <m; p++, q--)
                {
                    temp += arr[p][q];
                }
                for (int p = i + 1,q = j + 1; q < n && p <m ; p++, q++)
                {
                    temp += arr[p][q];
                }
                res = max(res, temp);
            }
            
        }
        cout << res <<endl;
    }
    return 0;
}