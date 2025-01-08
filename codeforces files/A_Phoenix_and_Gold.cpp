#include<bits/stdc++.h>
#define ll long long
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
    int n, x;
    cin>>n>>x;
    vector<int> v(n), large_v, n_v;
    ll sum = 0;
    for(int i=0; i<n; i++)
    {   
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++)
    {
        sum+=v[i];
        if(v[i]==x && i==n-1)
        {
            cout << "NO" << endl;
            return;
        }
        if(sum<=x)
        {
            n_v.push_back(v[i]);
        }
        else large_v.push_back(v[i]);
    }
    deque<int> dq;
    for (int i = 0; i < n_v.size();i++)
    {
        dq.push_back(n_v[i]);
    }
    sort(large_v.begin(), large_v.end());
    int i = 0,j=large_v.size()-1;
    while(i<j)
    {
        dq.push_front(large_v[i]);
        dq.push_back(large_v[j]);
        i++;
        j--;
    }
    cout << "YES" << endl;
    for(auto d:dq)
    {
        cout << d << " ";
    }
    cout << endl;
}