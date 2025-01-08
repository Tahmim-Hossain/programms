#include<bits/stdc++.h>
using namespace std;
void fast_IO();
void solve();
int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}
void fast_IO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve()
{
    int m, n;
    cin>>m>>n;
    int arr[m];
    vector<vector<int>> res(n);
    for(int i=0; i<m; i++)
    {
        cin >> arr[i];
        res[arr[i]%n].push_back(i+1);
    }
    int ind = -1;
    for(int i=0; i<n; i++)
    {
        if((int)res[i].size() == 1)
        {
            cout << "YES" << endl
                << res[i][0] << endl;
            return;
        }
    }
    cout << "NO" << endl;
}