#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
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
    vector<int> v(n);
    bool flag=false;
    for (int i = 0;i<n;i++)
    {
        cin>> v[i];
        v[i]--;
    }
    for (int i = 0;i<n;i++)
    {
        if(v[v[i]] ==i)
            flag = true;
    }
    flag ? cout << "2" << endl : cout << "3" << endl;
}