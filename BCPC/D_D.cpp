#include<bits/stdc++.h>
using namespace std;
void solve();
void fast_IO();
int main()
{
    fast_IO();
    solve();
    return 0;
}
void fast_IO()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
}
void solve()
{
    fast_IO();
    int n,cnt=0;
    cin>>n;
    string s;
    cin >> s;
    bool flag1 = false,flag2=false,flag3=false;
    for (int i = 0;i<n;i++)
    {
        if(s[i] =='A')
            flag1 = true;

            if(s[i] =='B')
            flag2 = true;

        if(s[i] =='C')
            flag3 = true;

        if(flag1 && flag2 && flag3)
            {
                cout << i + 1 << endl;
        return;
            }
    }
}