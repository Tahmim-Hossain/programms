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
    int n;
    cin >> n;
    if(n>100)
        {
            cout << n - 10 << endl;
    return;
        }

    cout<<n<< endl;
}