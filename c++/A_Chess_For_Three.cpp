#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void solve()
{
    vector<ll> v(3);
    ll sum = 0;
    for(auto & it : v)
    {    
        cin >> it;
        sum += it;
    }
    // for(int i = 0; i < 3; i++)
    // {
    //     cin >> v[i];
    //     sum+=v[i];
    // }
    sort(v.begin(), v.end());
    (sum % 2 == 0) ? cout << min( v[0] + v[1], sum/2) << endl : cout << "-1" << endl;
    //(sum % 2 != 0) ? cout << min( v[0] + v[1], sum/2) << endl : cout << "-1" << endl;
    
    // if(sum % 2 == 0)
    //     cout << min(v[0] + v[1], sum / 2) << endl;
    // else cout << "-1" << endl;
}
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