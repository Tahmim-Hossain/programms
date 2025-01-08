#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    cin>>v[i];

    int id = -1;
    int c=v[0];
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++)
    {
        if(v[i]==c)
        {
            id = i;
        }
    }
    int res,res1;
    if(id==n-1)
    {
        res = ceil((v[id] + v[id - 1]) / 2.0);
        cout<<1000001-res<<endl;
    }
    else if(id==0)
    {
        res1 = floor((v[id] + v[id + 1]) / 2.0);
        cout<<res1<<endl;
    }
    else{
        res = ceil((v[id] + v[id - 1]) / 2.0);
        res1 = floor((v[id] + v[id + 1]) / 2.0);
        cout << res1 - res + 1 << endl;
    }
}