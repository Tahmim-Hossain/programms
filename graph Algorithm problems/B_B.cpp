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
    fast_IO();
    int x, y;
    cin>>x>>y;
    int r = (float((1.00 * y) / x)) * 100;
    if(r>=50)
    {
        cout<<"YES"<<endl;
        return;
    }
    cout << "NO" << endl;
    //cout << (float((1.00*y) / x))*100 << endl;
}