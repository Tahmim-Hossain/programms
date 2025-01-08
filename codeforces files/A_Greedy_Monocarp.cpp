#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
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
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(auto &i : v)
    {
        cin>>i;
    }
    int sum = 0;
    sort(v.begin(),v.end(),greater<int>());
    for(auto &i : v)
    {
        
        if(sum+i<=k) sum += i;
        else
            break;
    }
    cout<<abs(sum-k)<<endl;
}