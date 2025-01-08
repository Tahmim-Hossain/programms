#include<bits/stdc++.h>
using namespace std;
void fast_IO();
void solve();
int main()
{
    fast_IO();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
void fast_IO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve()
{
    int n,m;
    cin>>m>>n;
    vector<string>v(m);
    int cnt = 0;
    for(int i=0;i<m;i++)
    {
        cin>>v[i];
        
    }
    for (int i = 0;i<m;i++)
    {
        if(n>=v[i].size())
        {
            n-=v[i].size();
            cnt++;
        }   
        else
            break;
    }
    cout << cnt << endl;
}