#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve();
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    v[0] = v[0] + 1;
    ll ans = 1;
    for (int i = 0; i < n;i++)
    {
        ans=ans*v[i];
    }
    cout<<ans<<endl;
}
