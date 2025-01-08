#include<bits/stdc++.h>
using namespace std;
void solve();
void fast_IO();
int main()
{
    fast_IO();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
void fast_IO()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
}
void solve()
{
    int n,m;
    cin >> m>>n;
    cout<<(m/n) * (m/n)<<endl;
    
}