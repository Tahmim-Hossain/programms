#include<bits/stdc++.h>
using namespace std;
void solve();
void fast_IO();
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
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &i : v)
    {
        cin>>i;
    }
    vector<int> cnt(n,0); //first n then number.
    for(auto &i : v)
    {
        cnt[i-1]++;
    }
    int single = 0, more = 0;
    for (int i = 0; i < n; i++)
    {
        if(cnt[i]==1)
            single++;
        else if(cnt[i]>1)
            more++;

        //cout<<cnt[i]<<endl;
    }
    cout<<((single+1)/2)*2 + more<<endl;
    
}
