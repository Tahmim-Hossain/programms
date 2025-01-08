#include<bits/stdc++.h>
#define ll long long 
using namespace std;
void solve();
bool prime(ll x);
void lcm(int x, int y);
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
    int x;
    cin>>x;
    if(x%2==0)
    {
        cout << x / 2 << " " << x / 2 << endl;
        return;
    }
    if(prime(x))
    {
        cout<<1<<" "<<x-1 << endl;
    return;
    }
    for (ll i = 3;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            ll a = x / i;
            ll b = x - a;
            cout<<a<<" "<<b<<endl;
            return;
        }
    }

        //lcm(3, x - 3);
    
}
void lcm(int x, int y)
{
    if(x%y==0 || y%x==0) 
    {
        cout<<x << " " << y << endl;
        return;
    }
    lcm(x+1, y-1);
}
bool prime(ll x)
{
    for(ll i=2; i<=sqrt(x);i++)
    {
        if(x/i==0)
            return true;
    }
    return false;
}