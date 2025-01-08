#include<bits/stdc++.h>
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
    cin >> n;
    vector<int> v(n),odds;
    
    for (int i = 0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]%2==1)
        {
            odds.push_back(v[i]);
        }
    }
    (odds.size() % 2 == 0) ? cout << "YES" << endl : cout << "NO" << endl;
}