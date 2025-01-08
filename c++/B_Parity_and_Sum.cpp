#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v1, v2;
    //for(auto &it:v)
    for(int i=0;i<n;i++){
        ll it;
        cin >> it;
        if(it%2==0) v2.push_back(it);
        else v1.push_back(it);
    }    
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    if(v1.size()==0 || v1.size()==n) 
    {
        cout <<0<< endl;
        return;
    }
    ll ans1 = 0, temp=v1.back(), ans2 = 0;
    for (auto &it:v2)
    {
        if(it>temp)
        {
            ans1+=2;
            temp += (2 * it);
        }
        else 
        {
            ans1++;
            temp += it;
        }
    }
    reverse(v2.begin(), v2.end());
    temp = v1.back();
    for (auto &it:v2)
    {
        if(it>temp)
        {
            ans2+=2;
            temp += (2 * it);
        }
        else 
        {
            ans2++;
            temp += it;
        }
    }
    cout<<min(ans1,ans2)<<endl;
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