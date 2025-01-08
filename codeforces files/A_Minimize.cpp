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
    int a, b;
    cin>>a>>b;
    (a>b) ? cout<<a-b<<endl : cout<<b-a<<endl;

}